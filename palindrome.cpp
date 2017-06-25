#include<iostream>
using namespace std;
int main()
{
  int n,no;
  int remain, num = 0;
  cin>>n;
  no = n;
  do
  {
    remain = n % 10;
    num = (num * 10 ) + remain;
    n = n / 10;
  }while( n != 0);
  if( num == no)
  cout<<no<<"is a palindrome";
  else
  cout<<no<<"is not a palindrome";
  return 0;
}
