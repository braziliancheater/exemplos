from main import app, db, Cliente, request, datetime

@app.route("/clientes/listar")
def clienteListar():

    try:
        consulta = Cliente.query.all()

        response = [
        {
            "id" : cliente.id,
            "nome" : cliente.nome,
            "celular" : cliente.celular,
            "email" : cliente.email,
        }
            for cliente in consulta
        ]
    except:
        return "O ID não encontrado ou e invalido", 404

    return response, 200

@app.route("/clientes/listar/<int:id>")
async def clienteFiltrar(id):
    if id == None:
        return "Nenhum ID informado", 500
    
    try:
        consulta = Cliente.query.get(id)

        response = {
            "id" : consulta.id,
            "nome" : consulta.nome,
            "celular" : consulta.celular,
            "email" : consulta.email,
        }
    except:
        return "O ID não encontrado ou e invalido", 404

    return response, 200

@app.route("/clientes/cadastar", methods=['POST'])
def clienteCadastrar():
    dados = request.get_json()

    cliente = Cliente(
        nome = dados['nome'],
        celular = dados['celular'],
        email = dados['email'],
    )

    try:
        db.session.add(cliente)
        db.session.commit()
        db.session.refresh(cliente)

        resposta = {"Mensagem": "Cliente cadastrado com sucesso!"}, 200
    except:
        resposta = {"Mensagem": "Erro ao cadastrar o cliente"}, 500

    return resposta

@app.route("/clientes/atualizar", methods=['POST'])
async def clienteAtualizar():
    dados = request.get_json()

    try:
        cliente = Cliente.query.get(dados['id'])

        if cliente:
            cliente.nome = dados['nome']
            cliente.celular = dados['celular']
            cliente.email = dados['email']

            db.session.commit()
            resposta = "Cliente atualizado com sucesso!", 200
    except:
        resposta = "Cliente não encontrado", 404

    return resposta

@app.route("/clientes/deletar/<int:id>")
def clienteDeletar(id):
    if id == None:
        return "O ID e vazio ou invalido", 404
    
    try:
        cliente = Cliente.query.get(id)

        db.session.delete(cliente)
        db.session.commit()

        retorno = "Cliente deletado com sucesso", 200
    except:
        retorno = "Erro ao deletar o cliente", 500

    return retorno