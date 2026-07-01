#include<stdio.h>

int f(int n)
{
    static int i = 1;
    if (n >= 5) return printf("%d ", n);
    n = n + i;
    i++;
    return f(n);
}

int main()
{
    f(1);
}
