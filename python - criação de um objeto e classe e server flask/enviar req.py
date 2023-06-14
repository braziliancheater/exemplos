import requests as req, json

item = {
            "id": 1,
            "nome": "Leite Longa Vida",
            "quantidade" : 1,
            "valor": 4
        }

response = req.post("http://127.0.0.1:5000/cadastrar", data=json.dumps(item))

if response.status_code == 201 :
    print(f"\n201 - O item {item['nome']} foi inserido com sucesso no carrino de compras")
else:
    print("500 - Erro Interno...")