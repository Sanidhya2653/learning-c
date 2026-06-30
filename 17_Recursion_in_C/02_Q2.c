#include<stdio.h>

void countup (int n)
{
    if (n == 0)
        return;

    countup (n-1);
    printf("%d ", n);
}

int main()
{
    countup (5);
}