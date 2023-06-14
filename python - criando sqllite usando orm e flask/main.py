from flask import Flask, request
from flask_sqlalchemy import SQLAlchemy

servidor = Flask(__name__)
servidor.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///db-orm.db"

orm = SQLAlchemy()

# Criando nossa clas de modelo
# Essa classe e baseada no paradigma PDO
# E o nosso ORM vai mapear essa classe e criar sua representação...
# Relacional no banco de dados

class Aluno(orm.Model):
    id = orm.Column(orm.Integer, primary_key = True, autoincrement = True)
    nome = orm.Column(orm.String, nullable = False)
    email = orm.Column(orm.String)
    end = orm.Column(orm.String, nullable = False)

@servidor.route("/")
def home():
    return "Servidor em execução",200

@servidor.route("/aluno", methods=['POST'])
def cadastrar_aluno():
    dados = request.get_json()

    aluno = Aluno (
        nome = dados['nome'],
        email = dados['email'],
        end = dados['end']
    )

    try:
        orm.session.add(aluno)
        orm.session.commit()
        orm.session.refresh(aluno)

        response = {"mensagem", "Registro adicionado."}, 201
    except:
        response = {"mensagem", "Ocorreu um erro ao inserir o registro."}, 500

    return response, 201

@servidor.route("/aluno/<int:id>")
def consultar_aluno(id):
    aluno = Aluno.query \
                    .get(id)

    response = {
        "id" : aluno.id,
        "nome" : aluno.nome,
        "email" : aluno.email,
        "end" : aluno.end
    }

    return response

@servidor.route("/aluno/<string:nome>")
def consultar_aluno_nome(nome):
    aluno = Aluno.query \
                    .filter_by(nome = nome) \
                    .all()

    response = [
        {
            "id" : alunos.id,
            "nome" : alunos.nome,
            "email" : alunos.email,
            "end" : alunos.end
        }
        for alunos in aluno
    ]

    return response, 200

@servidor.route("/alunos")
def listar_todos_alunos():
    aluno = Aluno.query \
                    .all()

    response = [
        {
            "id" : alunos.id,
            "nome" : alunos.nome,
            "email" : alunos.email,
            "end" : alunos.end
        }
        for alunos in aluno
    ]

    return response, 200

@servidor.route("/aluno", methods=['PUT'])
def atualizar_aluno():
    dados = request.get_json()
    try:
        aluno = Aluno.query.get(dados['id'])
        
        if aluno:
            aluno.nome = dados['nome']
            aluno.email = dados['email']
            aluno.end = dados['end']

            orm.session.commit()
            response = {"mensagem": "Registro atualizado!"}, 200
        else:
            response = {"mensagem", "Aluno não encontrado"}, 404
    except:
        response = {"mensagem": "Ocorreu um erro ao atualizar o registro"}, 200

    return response

@servidor.route("/aluno/<int:id>", methods=['DELETE'])
def deletar_aluno(id):
    try:
        aluno = Aluno.query.get(id)

        orm.session.delete(aluno)
        orm.session.commit()

        response = {"Mensagem": "Registro deletado com sucesso"}, 200
    except:
        response = {"Mensagem": "Ocorreu um erro ao deletar o registro"}, 500
    return response

orm.init_app(servidor)

with servidor.app_context():
    if(orm.create_all()): # Verifica quais classes ainda não possuem tabelas a ser criadas
        print("Criando tabelas...")
    else:
        print("Nenhuma tabela precisa ser criada")