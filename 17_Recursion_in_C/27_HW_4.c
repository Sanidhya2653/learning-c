#include<stdio.h>

int foo(int i)
{
    i = i + 2;
    return i;
}

int main()
{
    int a = 2;
    int* b = &a;
    foo(*b); // we are not catching the vale returned by the function so a will not get modified
    foo(*b);
    printf("%d", a);
}
