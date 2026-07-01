#include<stdio.h>

void r();
int i = 20;

int main()
{
    int i = 5;
    printf("%d ", i);
    r();
    printf("%d ", i);
    r();
    return 0;
}

void r()
{
    static int j;
    if (i < 10)
    {
        i = 3;
        printf("%d ", i);
    }
    printf("%d ", i + j);
    i++;
    j++;
}