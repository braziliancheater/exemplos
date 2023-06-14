#include <iostream>
#define n 1000 // unico jeito que eu pude pensar do vs n achar q a array n foi inicializada e definindo o n 

// by brazilian

int main() {
    int x[n],i,a,b,c;

    std::cin >> a;

    for (i = 0; i < a; i++)
        std::cin >> x[i];
 
    b = x[0];
    c = 0;

    for (i = 0; i < a; i++)
    {
        if (x[i] < b){
            b = x[i];
            c = i;
        }
    }

    std::cout << "Menor valor: " << b << std::endl << "Posicao: " << c << std::endl;
    return 0;
}