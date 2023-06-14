#include <iostream>

int sla; bool opc;

// made by brazilian

int main()
{
    while (opc == false) 
    {
        std::cin >> sla;

        if (sla != 2002)
            std::cout << "Senha Invalida" << std::endl;
        if (sla == 2002)
            opc = true;
    }   
    std::cout << "Acesso Permitido" << std::endl;
}