#include<stdio.h>

int main()
{
    int x = 0;
    for (int i=1; i<5; i++)
    {
        x += fun1() + fun2();
    }

    printf("%d", x);
}

int fun1()
{
    static int y = 5;
    y--;
    return y;
}

int fun2()
{
    static int y;
    y++;
    return y;
}