#include<iostream>
using namespace std;
int main()
{
  int n;
  long int fact = 1;
  cin>>n;
  for(int i = 0; i <= n; i++)
  {
    fact = fact * i;
  }
  cout<<fact;
}
