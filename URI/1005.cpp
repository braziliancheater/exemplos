#include <iostream>

// feito por brazilian

int main()
{   
    //calculo da media do aluno
	double n1, n2;

    std::cin >> n1;
    std::cin >> n2;

    double media = ((n1 * 3.5) + (n2 * 7.5)) / 11.0;

    printf("%s%.5f\n","MEDIA = ", media);
    return 0;
}