#include <iostream>
using namespace std;
void main()
{
    unsigned int n;
    unsigned long long factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;    
}
