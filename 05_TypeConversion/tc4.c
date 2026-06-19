#include<stdio.h>
int main()
{
    unsigned int a = 1000;
    int b = -1;

    if (a>b) printf("a is BIG");  // b gets converted to unsigned int due to a
    else printf( "a is SMALL");

    return 0;
}