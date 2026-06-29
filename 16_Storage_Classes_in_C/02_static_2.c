#include<stdio.h>

void decrement()
{
    static int count = 5;
    count--;
    printf("%d ", count);
}

int main()
{
    decrement();
    decrement();
    decrement();

    return 0;
}