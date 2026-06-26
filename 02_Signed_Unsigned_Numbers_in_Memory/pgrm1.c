#include<stdio.h>
int main()
{
    int y = -9;
    printf("%d\n",y);   //%d --> treat y as signed o/p = -9
    printf("%u",y);     //%u --> treat y as unsigned o/p = 4294967287
    return 0;
}