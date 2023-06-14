#include "produto.hpp"
#include "almoxarifado.hpp"

int main() {

    Almoxarifado A1;

    for (int i = 0; i < 5; i++) {
        Produto temp;
        string tipoTemp;
        cout << "Digite ";
        cin >> tipoTemp;
        temp.setTipo(tipoTemp);
        A1.insereProduto(temp, i);
    }

    A1.imprimeProduto();

    return 0;
}