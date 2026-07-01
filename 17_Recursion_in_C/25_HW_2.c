#include<stdio.h>

void x(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", n);
        x(n - 1);
    }
}

int main()
{
    x(2);
}
