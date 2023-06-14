#include <iostream>
using namespace std;

// questão 1

// função recursiva de calculo de fibonacci
int fibonacci(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    cout << "\nCalculo de fibonacci";
    
    int i, num;
    do
    {
        cout << "\nPosição do numero: ";
        cin >> num;
        
    } while(num < 0);
    
    cout << "[";
    for(i = 0; i < num + 1; i++)
    {
       if(fibonacci(i) != 0)
          cout << ", "; 
        
        cout << fibonacci(i);       
    }
    cout << "]\n\n";
        
    return 0;
}
