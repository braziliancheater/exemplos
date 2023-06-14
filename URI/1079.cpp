#include <iostream>
#include <iomanip>

// Weighted Averages
// made by brazilian

float a,b,c,n;

int main()
{
    // asks for a value to loop
    std::cin >> n;
    for(int i = 1; i <= n ; i++) // start of our loop
    {
        std::cin >> a;
        std::cin >> b; // asks for the values
        std::cin >> c;

        float soma = (a * 2.0) + (b * 3.0) + (c * 5.0);
        float resto = soma / 10.0;  // evaluate them and find an answer
        std::cout << std::setprecision(1) << std::fixed << resto << std::endl; // using setprecision and fixed our calc are made easier without printf.
    }
    // end of our loop
}