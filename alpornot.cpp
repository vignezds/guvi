#include<iostream>
using namespace std;
int main()
{
  char alp;
  cout<<"Enter any character or digit";;
  cin>>alp;
  if(alp >= 'a' && alp <= 'z')
  cout<<alp<<" is an alphabet";
  else if(alp >= 'A' && alp <= 'Z')
  cout<<alp<<" is an alphabet";
  else
  cout<<alp<<" is not an alphabet";;
  return 0;
 }
