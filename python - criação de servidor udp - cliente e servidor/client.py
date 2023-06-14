import socket as sc
import threading as td
from time import sleep

host = '127.0.0.1'
port = 1621

socketClient = sc.socket(family=sc.AF_INET, type=sc.SOCK_DGRAM)

def receberMensagem():
    while (1==1):
        try:
            msg, addr = socketClient.recvfrom(2048);
            if (msg != ''):
                print(f"O retorno do servidor foi: {msg.decode()}")
            sleep(1)
        except:
            pass

tdRec = td.Thread(target=receberMensagem)
tdRec.start()

def enviarMensagem():
    while (1==1):
        msg = input("Insira uma mensagem para ser enviada: ")
        socketClient.sendto(msg.encode(), (host, port));

tdEnv = td.Thread(target=enviarMensagem)
tdEnv.start()

tdEnv.join()
tdRec.join()

print("Fim")