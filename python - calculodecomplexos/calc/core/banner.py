import os
import sys
os.system("cls")

class Banner:
    def principal():
        print("Bem Vindo(a)!".center(os.get_terminal_size().columns))
        print("Para começarmos escolha entre:".center(os.get_terminal_size().columns))
        print("1 - Subjugado 2 - Soma 3 - Subtração 4 - Multiplicação 5 - Divisão\n".center(os.get_terminal_size().columns))