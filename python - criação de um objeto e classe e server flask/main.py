from flask import Flask, request, json
from carrinho import Carrinho

app = Flask(__name__)

@app.route("/")
def index():
    return "<h1>P1 - Carrinho</h1><p>Bem Vindo a homepage do carrinho de compras!</p><a href='http://127.0.0.1:5000/cadastar'>Cadastar</a><br><a href='http://127.0.0.1:5000/listar'>Listar</a>"

BancoCarrinho = Carrinho()
@app.route("/listar")
def listar() :
    return json.dumps(BancoCarrinho.listarProdutos())

@app.route("/cadastrar", methods = ['POST'])
def aluno () :
    dados = json.loads(request.data)
    BancoCarrinho.cadastrarProduto(dados)
    return "O cadastro do produto foi realizado com sucesso!", 201

if __name__ == "__main__":
    app.run()