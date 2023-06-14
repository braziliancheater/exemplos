#include <iostream>

// feito por brazilian

int main()
{
    //calculo de gasolina gasta
	double dist;
	double hours;
    std::cin >> hours;
    std::cin >> dist;

    double resp = hours * dist / 12;
    printf("%.3f\n", resp);
    return 0;
}