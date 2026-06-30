#include<stdio.h>

int func(int a)
{
    static int j = 0;
    j++;
    return a * j;
}

int main(void)
{
    int x = 10;
    while (x > 0)
    {
        printf("%d\n", func(x));
        --x;
    }
    return (0);
}
