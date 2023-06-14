#include <iostream>

// even or odd 
// made by brazilian

int a,n;

int main()
{
    // asks the user for a value to use in the loop
    std::cin >> n;
    for(int i = 1; i <= n ; i++) // loops n times 
    {
        std::cin >> a; // asks for a value so it can determinate if its any of the options below
        if (a % 2 == 0){
            if (a >= 1)
                std::cout << "EVEN POSITIVE" << std::endl;
            if (a == 0)
                std::cout << "NULL" << std::endl;
            if (a <= -1)
                std::cout << "EVEN NEGATIVE" << std::endl;
        } // dont forget brackets } otherwise its gona print 2 or more times 
        if (a % 2 != 0)
        {
            if (a >= 1)
                std::cout << "ODD POSITIVE" << std::endl;
            if (a == 0)
                std::cout << "NULL" << std::endl;
            if (a <= -1)
                std::cout << "ODD NEGATIVE" << std::endl;
        }
    } // end of our loop
}
