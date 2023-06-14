from flask import Flask, request
from flask_sqlalchemy import SQLAlchemy
import asyncio

servidor = Flask(__name__)
servidor.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///db-log.db"

orm = SQLAlchemy()

class Log(orm.Model):
    id = orm.Column(orm.Integer, primary_key = True, autoincrement = True) 
    ip = orm.Column(orm.String, nullable=True)
    data_consulta = orm.Column(orm.String, nullable=True)
    endpoint = orm.Column(orm.String, nullable=True)

@servidor.route("/log", methods=["POST"])
async def cadastrar_endpoint():
    dados = request.get_json()

    logs = Log(
        ip = dados['ip'],
        data_consulta = dados['data_consulta'],
        endpoint = dados['endpoint'],

    )

    try:
        orm.session.add(logs)
        orm.session.commit()
        orm.session.refresh(logs)
    
        response = "Cadastro realizado com sucesso", 201
    except:
        response = "Error", 500

    return response


@servidor.route("/log", methods=['POST'])
async def atualizar_endpoint():
    dados = request.get_json()

    try:
        logs = Log.query.get(dados['id'])

        if logs:
            logs.ip = dados['ip'],
            logs.data_consulta = dados['data_consulta'],
            logs.endpoint = dados['endpoint']
    
            orm.session.commit()

            response = "Atualização com sucesoo", 200
        else:
            response = "ID não encontrado", 200
    except:
        response = "Atualização não realizada", 500

    return response
    
@servidor.route("/log/<int:id>", methods=['DELETE'])
async def deletar_endpoint(id):
    if id == None:
        return "ID vazio ou invalido", 404

    try:
        logs = Log.query.get(id)
        
        orm.session.delete(logs)
        orm.session.commit()

        response = "Delete com sucesso", 200
    except:
        response = "Erro ao Deletar", 500

    return response

@servidor.route("/log/listar")
async def listar():
    logs = Log.query.all()

    response = [{
        "ip" : log.ip,
        "data_consulta" : log.data_consulta,
        "endpoint" : log.endpoint
        }
        for log in logs
    ]

    return response, 200

@servidor.route("/log/listar/<int:num>")
async def listar_id(num):
    if num == None:
        return "Nenhum ID informado", 500

    try:
        logs = Log.query.get(num)

        retorno = {
            "ip" : logs.ip,
            "data_consulta" : logs.data_consulta,
            "endpoint" : logs.endpoint
        }, 200
    except:
        return "ID nao existe na tabela", 404

    return retorno

orm.init_app(servidor)

if __name__ == '__main__':
    servidor.run(host="localhost", port=1338, debug=True)

with servidor.app_context() :
    orm.create_all()