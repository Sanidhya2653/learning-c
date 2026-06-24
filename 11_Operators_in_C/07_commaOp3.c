#include<stdio.h>
int main()
{
    int i, j=2;
    for (i=0, j=2; j>=0 && i<=5; i++, j--)
    {
        printf("%d", i+j);
    }
    return  0;
}