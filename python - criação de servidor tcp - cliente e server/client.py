import socket as sc, threading as td

host = "localhost"
port = 6565

clientTCP = sc.socket(family=sc.AF_INET, type=sc.SOCK_STREAM)
clientTCP.connect((host, port))

def recebeMensagem():
    while True:
        try:
            msg = clientTCP.recv(1024)
            if (msg.decode() != ''):
                print(msg.decode())
        except:
            pass 

# Inicia a thread do recebeMensagem()
tdRecebe = td.Thread(target=recebeMensagem)
tdRecebe.start()
    
def main():
    while True:
        try:
            escolha = input("Bem-vindo ao script secreto da (Anonymous)\nEscolha: ")
            if (escolha == 4):
                break
            clientTCP.send(escolha.encode())
        except:
            print("Erro interno, fechando socket")
            clientTCP.close()

main()