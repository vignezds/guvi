#include<iostream>
using namespace std;
int main()
{
  int n, no, count = 0;
  no = n;
  cout<<"Enter any number";
  cin>>n;
  while(n > 0)
  {
    n = n / 10;
    count++;
  }
  cout<<"Total numbers in"<<no<<" = " <<count;
  return 0;
}
   
