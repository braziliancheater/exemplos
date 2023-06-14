from flask import Flask, request
from flask_sqlalchemy import SQLAlchemy
from sqlalchemy.sql.expression import func
from datetime import datetime
import requests as rq
import random 

app = Flask(__name__)
app.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///db-cadastro.db"

db = SQLAlchemy()

class Cliente(db.Model):
    id = db.Column(db.Integer, autoincrement = True, primary_key = True)
    nome = db.Column(db.String)
    celular = db.Column(db.String)
    email = db.Column(db.String)
    orcamentos = db.relationship('Orcamento', backref='cliente', lazy=True)

class Orcamento(db.Model):
    id = db.Column(db.Integer, autoincrement = True, primary_key = True)
    destino = db.Column(db.String)
    valor_passagem = db.Column(db.Integer)
    qtd_passagem = db.Column(db.String)
    valor_total = db.Column(db.Integer)
    data_cadastro = db.Column(db.String)
    cliente_id = db.Column(db.Integer, db.ForeignKey('cliente.id'),
        nullable=False)

db.init_app(app)

# before_request roda toda vez que uma request e feita para o servidor
# subir o servidor de log na porta :42069 para que o log funcione corretamente!
@app.before_request
async def gravarLog():
    ip = request.remote_addr
    url = request.base_url
    hora = datetime.now()

    response = rq.post('http://127.0.0.1:1338/log', json={"ip": ip,
        "data_consulta": str(hora),
        "endpoint": url
    })
    
    print(f"LOG - Gravado no servidor de log! Status code: {response.status_code}")

with app.app_context():
    if (db.create_all()):
        print("Criando tabelas...")
    else:
        print("Tabelas já criadas...")

import models.clientes
import models.orcamentos
import models.cadastros