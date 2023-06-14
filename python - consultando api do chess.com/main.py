import requests as r

def quantidadeBlitz(json):
    print(f"Existem {len(json['live_blitz'])} jogadorees na categoria de live_blitz\n") 
        
def topBlitz(json):
    for i in range(10):
        print(f"{i+1}. \nNome: {json['live_blitz'][i]['username']}\nPontos: {json['live_blitz'][i]['score']} ")

def totalBlitz(json):
    soma = 0
    for i in range(len(json['live_blitz'])):
        soma = soma + json['live_blitz'][i]['score']
    print(f"\nO live_blitz tem a pontuação total de: {soma}")

def mediaBullet(json):
    somaBullet = 0
    somaBlitz = 0
    for i in range(len(json['live_bullet'])):
        somaBullet = somaBullet + json['live_bullet'][i]['score']
    for i in range(len(json['live_blitz'])):
        somaBlitz = somaBlitz + json['live_blitz'][i]['score']
    if ((somaBullet/len(json['live_bullet'])) > (somaBlitz/len(json['live_blitz']))):
        print(f"O Bullet tem a maior pontuação com: {(somaBullet/len(json['live_bullet']))} vs {(somaBlitz/len(json['live_blitz']))}")
    else:
        print(f"O Blitz tem a maior pontuação com: {(somaBlitz/len(json['live_blitz']))} vs {(somaBullet/len(json['live_bullet']))}")

def scoresAcima(json):
    mil = []
    acima = []
    for i in range(len(json['live_blitz'])):
        if (json['live_blitz'][i]['score'] > 3000 and json['live_blitz'][i]['score'] < 3100):
            mil.append(json['live_blitz'][i]['username'])
        elif (json['live_blitz'][i]['score'] > 3101):
            acima.append(json['live_blitz'][i]['username'])
    print(f"\nJogadores 3000 a 3100:\n{mil} \ne acima de 3100:\n{acima}")

def daily(json):
    print(f"Existem {len(json['daily'])} jogadorees na categoria de daily\n")
    for i in range(10):
        print(f"{i+1}. \nNome: {json['daily'][i]['username']}\nPontos: {json['daily'][i]['score']}")
    soma = 0
    for i in range(len(json['daily'])):
        soma = soma + json['daily'][i]['score']
    print(f"\nO daily tem a pontuação total de: {soma}")
    mil = []
    acima = []
    for i in range(len(json['daily'])): # Não existem jogadores com mais de 3000 mil no daily de 07/04
        if (json['daily'][i]['score'] > 3000 and json['daily'][i]['score'] < 3100):
            mil.append(json['daily'][i]['username'])
        elif (json['daily'][i]['score'] > 3101):
            acima.append(json['daily'][i]['username'])
    print(f"\nJogadores 3000 a 3100:\n{mil} \ne acima de 3100:\n{acima}")
    somaBullet = 0
    somaDaily = 0
    for i in range(len(json['live_bullet'])):
        somaBullet = somaBullet + json['live_bullet'][i]['score']
    for i in range(len(json['daily'])):
        somaDaily = somaDaily + json['daily'][i]['score']
    if ((somaBullet/len(json['live_bullet'])) > (somaDaily/len(json['daily']))):
        print(f"O Bullet tem a maior pontuação com: {(somaBullet/len(json['live_bullet']))} vs {(somaDaily/len(json['daily']))}")
    else:
        print(f"O Daily tem a maior pontuação com: {(somaDaily/len(json['daily']))} vs {(somaBullet/len(json['live_bullet']))}")

def main():
    url = "https://api.chess.com/pub/leaderboards"
    requisicao = r.get(url)
    if (requisicao.status_code == 200):
        json = requisicao.json()
        quantidadeBlitz(json)
        topBlitz(json)
        totalBlitz(json)
        scoresAcima(json)
        mediaBullet(json)
        print("\n---------------- Categoria Daily ----------------")
        daily(json)

main()