#include <iostream>

// by brazilian

int main() {

    int n[10], a, v;
    std::cin >> v;
    
    for (a = 0; a <= 9; a++)
    {
        n[a] = v;
        std::cout << "N[" << a << "] = " << v << std::endl;
        v *= 2;
    }
    return 0;
}