#include <iostream>
using namespace std;
void main()
{
  int n, i;
  bool isPrime = true;
  cout << "Enter a number ";
  cin >> n;
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "Prime";
  else
      cout << "Not a Prime";
}
