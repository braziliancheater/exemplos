from random import randint
from datetime import datetime

class NotaFiscal :

    #construtor
    def __init__(self) :
        self.Codigo = randint(0, 10)
        self.Descricao = None
        self.DataCriacao = datetime.now().strftime("%d/%m/%Y, %H:%M:%S")
        self.DataAtualizacao = None
        self.ValorTotal = 0.0
        self.Produtos = []

    #função para adicionar produto na nf
    def adicionarProduto(self, produto) :
        try :
            if produto not in self.Produtos:
                self.Produtos.append(produto)
                self.ValorTotal += produto.Valor * produto.Quantidade
            else :
                index = self.Produtos.index(produto)
                produtoAtual = self.Produtos[index]

                produtoAtual.Quantidade += produto.Quantidade
                produtoAtual.Valor = produto.Valor
                self.ValorTotal += produto.Valor * produto.Quantidade

            self.DataAtualizacao = datetime.now().strftime("%d/%m/%Y, %H:%M:%S")
            return True
        except:
            print("Ocorreu uma falha!")
            return False
    
    #função para remover produto na nf
    def removerProduto(self, produtoNome) :
        for prod in self.Produtos :
            if prod.Nome == produtoNome:
                self.Produtos.remove(prod)
                self.ValorTotal -= prod.Valor * prod.Quantidade
                return True
        
        return False
    
