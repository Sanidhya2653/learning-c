#include<stdio.h>
int main()
{
    int x=1, y=0, z=5;
    int a = x && y || z++;     // a = ((x && y) || z++)  && has higher priority
    printf("%d", z);

    return 0;
}