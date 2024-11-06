#include <iostream>
using namespace std;

int main() 
{
    int fib1 = 1, fib2 = 1, fib3 = 0, n;
    cout << "Enter a number: ";
    cin >> n;
    cout <<"Fibonacci Series :" <<fib1<<" "<<fib2<<" ";

    fib3 = fib1 + fib2;

    while(fib3 <= n) 
    {
        cout << fib3<<" ";
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
    }
    return 0;
}