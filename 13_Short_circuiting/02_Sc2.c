#include<stdio.h>
int main()
{
    int a=1, b=1, c=1;

    if (a!=b || c++) // c++ will get evaluated
    {
        printf("%d",c);
    }

    return 0;
}