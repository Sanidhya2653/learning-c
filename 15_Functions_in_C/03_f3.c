#include<stdio.h>

int fun (int x, int y);   // function declaration

int main()
{
    int a;
    a = fun(2,3);

    printf("%d", a);
}

int fun (int x, int y)   // function definition
{
    return x+y;
}
