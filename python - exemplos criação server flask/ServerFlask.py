from flask import Flask, request
from NotaFiscal import NotaFiscal
from Banco import Db
from Produto import Produto

server = Flask(__name__)

#memoria simulando banco de dados
contexto = Db()

@server.route("/")
def minhaHome() :
    return "Servidor executando"

@server.route("/notafiscal", methods= ['POST'])
def criarNotaFiscal() :
    minhaNotaFiscal = NotaFiscal()
    contexto.NotasFiscais.append(minhaNotaFiscal)

    return { "Codigo:" : minhaNotaFiscal.Codigo }, 201 

@server.route("/notafiscal/<int:codigo>/produto", methods = ['POST'])
def adicionarProdutoNota(codigo) :
    dado = request.get_json()
    produto = Produto(dado['nome'], dado['valor'], dado['quantidade'])

    for nf in contexto.NotasFiscais:
        if nf.Codigo == codigo :
            nf.adicionarProduto(produto)
            break

    return "Produto criado com sucesso", 201

@server.route("/notasfiscais")
def listarNotas() :
    response = [ {
                    "Codigo" : nf.Codigo,
                    "ValorTotal" : nf.ValorTotal,
                    "Produtos" : [{
                        "Nome:" : prod.Nome,
                        "Valor" : prod.Valor,
                        "Quantidade" : prod.Quantidade
                    } 
                    for prod in nf.Produtos ]
                }         
                for nf in contexto.NotasFiscais ]
    
    return { "NotasFiscais": response }, 200

if __name__ == "__main__" :
    server.run()