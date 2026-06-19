#include<stdio.h>
int main()
{
    int a = 1000;
    unsigned int b = -1;

    if (a>-1) printf("a is BIG"); // -1 by default int are signed
    else printf("a is SMALL");

    return 0;
}