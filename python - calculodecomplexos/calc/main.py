from calc.core.calc import calculo

class main:
    def opcoes(escolha):
        if escolha == 1:
            x = int(input("\nx = "))
            y = int(input("y = "))
            calculo.conj(x,y)
        if escolha == 2:
            x = int(input("\nx = "))
            y = int(input("y = "))
            x2 = int(input("\nx2 = "))
            y2 = int(input("y2 = "))
            calculo.soma(x,y,x2,y2)
        if escolha == 3:
            x = int(input("\nx = "))
            y = int(input("y = "))
            x2 = int(input("x2 = "))
            y2 = int(input("y2 = "))
            calculo.subtracao(x,y,x2,y2)
        if escolha == 4:
            x = int(input("\nx = "))
            y = int(input("y = "))
            x2 = int(input("\nx2 = "))
            y2 = int(input("y2 = "))
            calculo.multiplicacao(x,y,x2,y2)
        if escolha == 5:
            x = int(input("\nx = "))
            y = int(input("y = "))
            x2 = int(input("\nx2 = "))
            y2 = int(input("y2 = "))
            calculo.multiplicacao(x,y,x2,y2)
