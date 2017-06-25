#include<iostream>
using namespace std;
int main()
{
  int n, p, result = 1;
  cout<<"Enter base number and its exponent value";
  cin>>n>>p;
  int i = p;
  for ( i ; i < = p ; i--)
  {
    result = result * i;
  }
  cout<<"Power of"<<n<<"pow"<<p<<" = " <<result;
  return 0;
}
