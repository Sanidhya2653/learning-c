#include<stdio.h>

double power(double x, int n)
{
    if (n == 1)
        return x;
    else
        return x * power(x, n - 1);
    --n;
}

int main()
{
    int a = power(2, 5);
    printf("%d ", a);
}
