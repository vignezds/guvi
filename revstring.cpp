#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s[50], t;
  int i = 0, j;
  cin>>s;
  j = strlen(s) - 1;
  while(i<j)
  {
    temp = s[i];
    s[j] = s[i];
    s[i] = temp;
  }
  cout<<Reversed string : "<<s;
  return 0;
}
