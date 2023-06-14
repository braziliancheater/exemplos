from main import app, db, Orcamento, Cliente, request, datetime, random, func

@app.route("/destinoValor/<int:valor>")
async def destinoValor(valor):
    try: 
        consulta = Orcamento.query.filter(Orcamento.valor_total < valor).order_by(Orcamento.valor_total)

        resposta = [{
            "id": consu.id,
            "destino": consu.destino,
            "valor_passagem": consu.valor_passagem,
            "qtd_passagem": consu.qtd_passagem,
            "valor_total": consu.valor_total
            } for consu in consulta
        ]
    except:
        return "Erro ao consultar a tabela, Existem registros?", 404
    return resposta, 200


@app.route("/orcamentosCliente/<int:id>")
async def orcamentosCliente(id):
    try: 
        consulta = Orcamento.query.filter_by(cliente_id=id).all()

        resposta = [{
            "id": consu.id,
            "destino": consu.destino,
            "valor_passagem": consu.valor_passagem,
            "qtd_passagem": consu.qtd_passagem,
            "valor_total": consu.valor_total
            } for consu in consulta
        ]
    except:
        return "Erro ao consultar a tabela, Existem registros?", 404
    return resposta, 200


@app.route("/randomDestino/<int:valor>")
async def randomDestino(valor):
    try: 
        consulta = Orcamento.query.filter(Orcamento.valor_total < valor).order_by(func.random()).limit(2)
        
        resposta = [{
            "id": consu.id,
            "destino": consu.destino,
            "valor_passagem": consu.valor_passagem,
            "qtd_passagem": consu.qtd_passagem,
            "valor_total": consu.valor_total
            } for consu in consulta
        ]
    except:
        return "Erro ao consultar a tabela, Existem registros?", 404
    return resposta, 200
