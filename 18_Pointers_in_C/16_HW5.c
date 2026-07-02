#include<stdio.h>

int foo(int i)
{
    i = i + 2;
    return i;
}

int main()
{
    int a = 2;
    int *b = &a;
    foo(*b); // here we are not storing the returned value so it is ignored (b is a pointer to a it does not has it's own box)
    foo(*b); // here we are not storing the returned value so it is ignored
    printf("%d", a);

    return 0;
}