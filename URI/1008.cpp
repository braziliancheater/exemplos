#include <iostream>

// feito por brazilian

int main()
{
    //calculo de salario
	int n;
	double hours;
	double din;

    std::cin >> n;
    std::cin >> hours;
    std::cin >> din;
    double resp = hours * din;

    printf("%s%d", "NUMBER = ", n);
    printf("%s%.2f\n", "\nSALARY = U$ ", resp);

    return 0;
}