#include<stdio.h>
void main() 
{
   int i = 0;
   char charac;
   for (i = 0; i < 256; i++) 
   {
      printf("%c ", charac);
      charac = charac + 1;
   }
}
