/* Short circuiting, order of evaluation and associativity for logical and / or operator */

#include<stdio.h>
int main()
{
    int a=1, b=1, c=1;

    if (a==b || c++) // c++ will not get evaluated bcz a==b is true and true OR anything is true, this is k/a short circuiting
    {
        printf("%d",c);
    }

    return 0;
}