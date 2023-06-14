from main import app, db, Orcamento, request, datetime

@app.route("/orcamentos/listar")
def orcamentoListar():

    try:
        consulta = Orcamento.query.all()

        response = [
        {
            "id" : orcamento.id,
            "destino" : orcamento.destino,
            "valor_passagem" : orcamento.valor_passagem,
            "qtd_passagem" : orcamento.qtd_passagem,
            "valor_total" : orcamento.valor_total,
            "data_cadastro" : orcamento.data_cadastro
        }
            for orcamento in consulta
        ]
    except:
        return "O ID não encontrado ou e invalido", 404

    return response, 200

@app.route("/orcamentos/listar/<int:id>")
def orcamentoFiltrar(id):
    if id == None:
        return "Nenhum ID informado", 500
    
    try:
        consulta = Orcamento.query.get(id)

        response = {
            "id" : consulta.id,
            "destino" : consulta.destino,
            "valor_passagem" : consulta.valor_passagem,
            "qtd_passagem" : consulta.qtd_passagem,
            "valor_total" : consulta.valor_total,
            "data_cadastro" : consulta.data_cadastro
        }
    except:
        return "O ID não encontrado ou e invalido", 404

    return consulta, 200

@app.route("/orcamentos/cadastrar", methods=['POST'])
async def orcamentoCadastrar():
    dados = request.get_json()

    orcamento = Orcamento(
        destino = dados['destino'],
        valor_passagem = dados['valor_passagem'],
        qtd_passagem = dados['qtd_passagem'],
        valor_total = dados['valor_total'],
        data_cadastro = datetime.now(),
        cliente_id = dados['cliente_id']
    )

    try:
        db.session.add(orcamento)
        db.session.commit()
        db.session.refresh(orcamento)

        resposta = {"Mensagem": "Orcamento cadastrado com sucesso!"}, 200
    except:
        resposta = {"Mensagem": "Erro ao cadastrar o orcamento"}, 500

    return resposta

@app.route("/orcamentos/atualizar", methods=['POST'])
async def orcamentoAtualizar():
    dados = request.get_json()

    try:
        orcamento = Orcamento.query.get(dados['id'])

        if orcamento:
            orcamento.destino = dados['destino'],
            orcamento.valor_passagem = dados['valor_passagem'],
            orcamento.qtd_passagem = dados['qtd_passagem'],
            orcamento.valor_total = dados['valor_total']

            db.session.commit()
            resposta = "Orcamento atualizado com sucesso!", 200
    except:
        resposta = "Orcamento não encontrado", 404

    return resposta

@app.route("/orcamentos/deletar/<int:id>")
def orcamentoDeletar(id):
    if id == None:
        return "O ID e vazio ou invalido", 404
    
    try:
        orcamento = Orcamento.query.get(id)

        db.session.delete(orcamento)
        db.session.commit()

        retorno = "Orcamento deletado com sucesso", 200
    except:
        retorno = "Erro ao deletar o orcamento", 500

    return retorno