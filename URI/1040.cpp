#include <iostream>
#include <iomanip>  

// feito por brazilian

int main()
{
	// media dos estuda
	double n1, n2, n3, n4, media, exame, soma;

	std::cin >> n1; std::cin >> n2; std::cin >> n3; std::cin >> n4;
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Media: " << media << std::endl;

	if (media < 5.0) std::cout << "Aluno reprovado.\n";
	if (media >= 5.0 && media <= 6.9)
	{
		std::cout << "Aluno em exame.\n";
		std::cin >> exame;
		soma = (exame + media) / 2;
		std::cout << "Nota do exame: " << exame << std::endl;
		if (soma < 5.0) std::cout << "Aluno reprovado.\n" << "Media final: " << soma << std::endl;
		if (soma >= 5.0) std::cout << "Aluno aprovado.\n" << "Media final: " << soma << std::endl;
	}
	if (media >= 7) std::cout << "Aluno aprovado.\n";
}
