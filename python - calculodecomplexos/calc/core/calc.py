class calculo:
    
    # Usar metodos como complex() facilita na hora do calculo e na hora da programacao ja que bibliotecas adicionais nao sai necessárias!
    # Saiba mais em: https://python-reference.readthedocs.io/en/latest/docs/complex/

    def conj(x,y):
        print("\nDado o complexo: z = " + str(complex(x,y)))

        # e usando metodos como conjugate nao existe basicamente nenhum trabalho.
        print("O subjugado e igual a: z = " + str(complex(x,y).conjugate()) + "\n")
        
    def soma(x,y,x2,y2):
        print("\nDado os complexos: z1 = " + str(complex(x,y)) + " e z2 = " + str(complex(x2,y2)))

        # soma simples dos complexos
        soma = complex(x,y) + complex(x2,y2)
        print("A soma dos complexos e: z = " + str(soma) + "\n")

    def subtracao(x,y,x2,y2):
        print("\nDado os complexos: z1 = " + str(complex(x,y)) + " e z2 = " + str(complex(x2,y2)))

        # subtracao simples dos complexos
        sub = complex(x,y) - complex(x2,y2)
        print("A subtração dos complexos e: z = " + str(sub) + "\n")

    def multiplicacao(x,y,x2,y2):
        print("\nDado os complexos: z1 = " + str(complex(x,y)) + " e z2 = " + str(complex(x2,y2)))

        # multiplicacao simples dos complexos
        multi = complex(x,y) * complex(x2,y2)
        print("A multiplicação dos complexos e: z = " + str(multi) + "\n")

    def divisao(x,y,x2,y2):
        print("\nDado os complexos: z1 = " + str(complex(x,y)) + " e z2 = " + str(complex(x2,y2)))

        # divisao simples dos complexos
        multi = complex(x,y) * complex(x2,y2)
        print("A divisão dos complexos e: z = " + str(multi) + "\n")
    
    # Porque usar mais de um Arquivo e o uso de Funções?
    # R: Faz com que o programa fique mais "limpo" e facilita o entendimento.