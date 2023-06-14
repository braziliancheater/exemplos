#include <iostream>

// feito por brazilian

int main()
{
	double n = 3.14159;
	double r;
	
    std::cin >> r;
    
    double resp = n * r * r;
    printf("%s%.4f\n","A=", resp);

    return 0;
}