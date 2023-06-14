import threading as thr
import socket as sc

host = '127.0.0.1'
port = 1621
lista = ["Rodrigos","Senas"]

socketServer = sc.socket(family=sc.AF_INET, type=sc.SOCK_DGRAM)
socketServer.bind((host, port))

def adicionarElemento(elemento):
    print(f"Adicionando elemento {elemento} a lista")
    lista.append(elemento)
    print("Elemento Adicionado")
    
def removerElemento(elemento):
    print(f"Removendo elemento {elemento} da lista")
    #posicao = lista.index(elemento)
    lista.remove(elemento)
    print("Objeto removido")

def procurarElemento(elemento):
    print(f"Procurando elemento {elemento} na lista")
    posicao = lista.index(elemento)
    if(posicao != ''):
        print("Objeto encontrado")
    else:
        print("Objeto não encontrado")
    
def receberMensagem():
    while (1==1):
        msg, addr = socketServer.recvfrom(1024)
        if (msg != ''):
            print(f"Mensagem: {msg.decode()}, Endereco: {addr}")
            socketServer.sendto("\nPacote recebido pelo server...".encode(), addr)
            msgconv = msg.split()
            print(f"{msgconv}, {msgconv[0]},{msgconv[1]}")
            if(msgconv[0] == b"add"):
                adicionarElemento(msgconv[1])
                socketServer.sendto(f"Ação realizada com sucesso! Lista: {lista}".encode(), addr)
            elif (msgconv[0] == b"rmv"):
                removerElemento(msgconv[1])
                socketServer.sendto(f"Ação realizada com sucesso! Lista: {lista}".encode(), addr)
            elif (msgconv[0] == b'fin'):
                procurarElemento(msgconv[1])
                socketServer.sendto(f"Ação realizada com sucesso! Lista: {lista}".encode(), addr)
            else:
                print("Opção invalida")
                socketServer.sendto(f"Opção invalida! Lista: {lista}".encode(), addr)

thrRec = thr.Thread(target=receberMensagem)
thrRec.start()
