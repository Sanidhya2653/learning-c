#include<stdio.h>

void increment()
{
    static int count = 0;   // gets executed only once (whenever we call increment() twice we don't execute it
    count++;
    printf("%d ", count);
}

int main()
{
    increment();
    increment();
    increment();

    return 0;
}