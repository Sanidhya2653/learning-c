#include<stdio.h>
int main()
{
   int x = -9;
   short int y = x;

   printf("%d\n", x);
   printf("%u\n", x);
   printf("%d\n", y);
   printf("%u\n", y);

   printf(" \n");

   int a = 40000; // 40000 in binary 00000000 00000000 00000000 00000000 10011100 01000000
   short int b = a;  // b in binary after truncation 10011100 01000000

   printf("%d\n", a);
   printf("%d\n", b);

   return 0;
}