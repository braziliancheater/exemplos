#include <iostream>
#include <iomanip>  

// feito por brazilian

int main()
{
    // snack 
    double um = 4.00, dois = 4.50, tre = 5.00, quat = 2.00, cin = 1.50; double x, y;

    std::cin >> x;
    std::cin >> y;

    std::cout << std::fixed << std::setprecision(2);
    if (x == 1) std::cout << "Total: R$ " << um * y << std::endl;
    if (x == 2) std::cout << "Total: R$ " << dois * y << std::endl;
    if (x == 3) std::cout << "Total: R$ " << tre * y << std::endl;
    if (x == 4) std::cout << "Total: R$ " << quat * y << std::endl;
    if (x == 5) std::cout << "Total: R$ " << cin * y << std::endl;
}