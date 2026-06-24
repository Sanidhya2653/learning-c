/* exp 1 ? exp 2 : exp 3
 * if exp 1 is true goto exp 2 otherwise goto 3
 * similar to if-else

 if (exp 1)
 {
   (exp 2)
   }
   else
   {
     (exp 3)
     }

*/

#include<stdio.h>
int main()
{
    int a = 0;
    a = 5<2 ? 4 : 3;
    printf("%d",a);

    return 0;
}