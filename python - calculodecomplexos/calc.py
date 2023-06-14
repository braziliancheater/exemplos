from calc.main import main
from calc.core.banner import Banner

# MA1 - Engenharia de Computação 

Banner.principal()

escolha = int(input("Eu escolho: "))
main.opcoes(escolha)