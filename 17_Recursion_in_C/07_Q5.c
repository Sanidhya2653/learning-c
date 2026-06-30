#include<stdio.h>

void increase(int x)
{
    static int i = 0;
    x = i + x;
    i++;
    printf("x = %d, i = %d \n", x, i);
}

int main(void)
{
    int i = 0;
    for (; i < 4; ++i)
    {
        increase(i);
    }
}
