class Carrinho:
    def __init__(self) :
        self.id = []
        self.nome = []
        self.quantidade = []
        self.valor= []
    
    def cadastrarProduto(self, dado):
        #id, nome, quantidade, valor
        self.id.append(dado['id'])
        self.nome.append(dado['nome'])
        self.quantidade.append(dado['quantidade'])
        self.valor.append(dado['valor'])

    def listarProdutos(self) :
        return self.nome