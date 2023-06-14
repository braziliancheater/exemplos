#include <iostream>

// feito por brazilian

int main()
{
	// time conversion wow 
	int seg, hora, min , res;

	std::cin >> res;

	hora = res / 3600;
	min = res % 3600 / 60;
	seg = res % 60;

	std::cout << hora << ":" << min << ":" << seg << std::endl;
}