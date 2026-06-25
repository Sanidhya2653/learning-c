#include<stdio.h>
int main()
{
    int a=1, b=1, c=1;

    if (a!=b && c++) // is false and c++ will not get evaluated
    {
        printf("%d",c);  // unreachable code
    }
    printf("%d",c);

    return 0;
}