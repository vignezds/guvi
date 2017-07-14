#include <iostream>
using namespace std;
void main()
{
    int t = 0, t1 = 1, nt = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Fibonacci Series: " << t << ", " << t1 << ", ";
    nt = t + t1;
    while(nt <= n)
    {
        cout << nt << ", ";
        t = t1;
        t1 = nt;
        nt = t + t1;
    }
}
