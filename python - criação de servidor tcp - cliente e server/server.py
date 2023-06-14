import socket as sc, threading as td

host = "localhost"
port = 6565

serverTCP = sc.socket(family=sc.AF_INET, type=sc.SOCK_STREAM)
serverTCP.bind((host, port))

serverTCP.listen()

log = []
saldoDeMentira = 500

def enviaMensagem(con,msg):
    con.send(msg.encode())

def mainframe(cone, end):
    global saldoDeMentira
    while True:
        try:
            response = cone.recv(1024)
            
            msgDecode = response.decode().split(";")
            acao = msgDecode[0]
            valor = msgDecode[1]
            print(f"Ação: {acao}, {valor}")
            
            if acao == "invadir" :
                if valor == "nasa":
                    enviaMensagem(cone,"Você invadiu com sucesso a NASA!")
                elif valor == "banco":
                    enviaMensagem(cone,"Você invadiu com sucesso o banco do BRASIL!")
            elif acao == "roubar" :
                if saldoDeMentira < 0:
                    if valor < 500:
                        enviaMensagem(cone,"Para de ser tão fominha, deixe para os outros (Limite maximo e 500!)")
                    else:
                        saldoDeMentira = saldoDeMentira - valor
                        enviaMensagem(cone,f"Você acaba de roubar {saldoDeMentira} em bitcoin!")
                else:
                    enviaMensagem(cone,"Não existe mais saldo para ser roubado, chegaram antes que você :(")
        except:
            print("Os dados recebidos são invalidos")
            cone.close()

def main():
    while True:
        try:
            con, addr = serverTCP.accept()
            print("Bem vindo ao mainframe 😎")
            log.append(addr)
            print(f"Cliente: {addr[1]} se conectou...")

            tdMainFrame = td.Thread(target=mainframe(con, addr))
            tdMainFrame.start()
        except:
            con.close()
            print("500 - Erro Interno")
main()