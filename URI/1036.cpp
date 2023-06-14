#include <iostream>
#include <iomanip>
#include <math.h>

// feito por brazilian

int main()
{
	// bhaskara
	double a, b, c;

	std::cin >> a; std::cin >> b; std::cin >> c; 

	double delta = pow(b,2) - 4 * a * c;
	
	if (a == 0) std::cout << "Impossivel calcular\n";
	else
	{
		if (delta > 0) \
		{

		double r1 = (-b + pow(delta, 0.5)) / (2 * a);
		double r2 = (-b - pow(delta, 0.5)) / (2 * a);

		std::cout << std::fixed << std::setprecision(5);
		std::cout << "R1 = " << r1 << std::endl << "R2 = " <<  r2 << std::endl;

	}
	else std::cout << "Impossivel calcular\n";
	}
}
