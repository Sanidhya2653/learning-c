#include<stdio.h>
int main()
{
    int x, i=4, j=7;
    x = j || i++ && 1;      // x = j || (i++ && 1)  since j=7 is true i++ && 1 will not get evaluated
    printf("%d", i);
    return 0;
}