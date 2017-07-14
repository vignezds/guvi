#include<iostream>
using namespace std;
void main()
{
  int no, sod = 0, temp, temp1;
  cin>>no;
  temp1 = no;
  while(no!=0)
  {
    temp = no%10;
    sod = sod+(temp*temp*temp);
    no=no/10;
  }
  if(temp1 == sod)
  cout<<no<<"is a armstrong number";
  else
  cout<<no<<"is not a armstrong number";
}
    
