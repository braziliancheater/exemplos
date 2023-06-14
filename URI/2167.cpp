#include <iostream>

// by brazilian

int main() {

    int n, a, b, c = 1, d = 1;

    std::cin >> n;
    std::cin >> a;

    while (c++ < n) {
        std::cin >> b;

        if (b < a) {
            d = 0;
            break;
        }
        a = b;
    }
    if (d)
        c = 0;
    std::cout << c << std::endl;

    return 0;
}