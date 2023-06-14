#include <iostream>

// feito por brazilian

int main()
{
    //calculo de nota de banco
	int din, cal;
	
    std::cin >> din;

    std::cout << din << "\n";
    std::cout << din / 100 << " nota(s) de R$ 100,00\n";
    cal = (din % 100);
    std::cout << cal / 50 << " nota(s) de R$ 50,00\n";
    cal = (cal % 50);
    std::cout << cal / 20 << " nota(s) de R$ 20,00\n";
    cal = (cal % 20);
    std::cout << cal / 10 << " nota(s) de R$ 10,00\n";
    cal = (cal % 10);
    std::cout << cal / 5 << " nota(s) de R$ 5,00\n";
    cal = (cal % 5);
    std::cout << cal / 2 << " nota(s) de R$ 2,00\n";
    cal = (cal % 2);
    std::cout << cal / 1 << " nota(s) de R$ 1,00\n";
    return 0;
}