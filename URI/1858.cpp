#include <iostream>
#define n 1000

// by brazilian

int main() {
    int a, b, c = 0;

    std::cin >> a;
    int x[n];

    for (int i = 0; i < a; i++)
       std::cin >> x[i];

    b = x[0];

    for (int i = 0; i < a; i++)
    {
        if (x[i] < b)
        {
            b = x[i];
            c = i;
        }
    }
    std::cout << c + 1 << std::endl;
}