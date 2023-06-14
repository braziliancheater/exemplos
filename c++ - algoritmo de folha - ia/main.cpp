#include <iostream>
#include <stack>

#include "no.hpp"

using namespace std;

int main() {

    // Estrutura de dados usada na busca
    stack <No *> pilha;

    // Estado Inicial do problema, Não pode ser instanciado por enquanto.
    Estado * inicial;

    // Qual e a folha escolhida para a expansão.
    No * atual = new No(inicial);

    // Inseriu a raiz na pilha
    pilha.push(atual);

    // Enquanto o estado no nó atual não for objetivo
    while(!atual->getEstado()->eObjetivo()){
        // Remover o nó da pilha
        pilha.pop();
        // Gerar os filhos do estado que esta no nó atual...
        list<Estado *> filhos = atual->getEstado()->expandir();
        // Percorrer a lista
        for(list<Estado *>::iterator it = filhos.begin(); it != filhos.end(); it++) {
            // Obter elemento da lista
            Estado * filho = *it;
            // Criar uma nova folha 
            No * novaFolha = new No(filho, atual);
            // Insere na pilha
            pilha.push(novaFolha);
        }
        // Pegar o topo da pilha
        atual = pilha.top();
    }
    // Finito!!!!

    return 0;   
}