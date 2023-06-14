#include <iostream>
#include <iomanip>

int gas, alc, die, end, sla; bool opc;

// made by brazilian

int main()
{
    while (opc == false) 
    {
        std::cin >> sla;

        if (sla == 1)
            alc++;
        if (sla == 2)
            gas++;
        if (sla == 3)
            die++;
        if (sla == 4)
            opc = true;
    }   

    std::cout << "MUITO OBRIGADO\n" << "Alcool: " << alc << std::endl << "Gasolina: " << gas << std::endl << "Diesel: " << die << std::endl;
}