/* Evaluated left to right and the value of the right-most expression is the value of
 the combined expression

 value = (x=10, y=5, x+y)
 o/p: value = 15

 */

#include<stdio.h>
int main()
{
 int i, j=2;
 for(i=0; i<=5, j>=0; i++)
 {
  printf("%d", i+j);
  j--;
 }
 return 0;
}