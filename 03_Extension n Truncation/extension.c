#include<stdio.h>
int main()
{
    short int x = -9;
    unsigned int ix = x;
    printf("%d\n",x);
    printf("%u\n",x);
    printf("%d\n",ix);
    printf("%u\n",ix); // both unsigned numbers look same bcz of int promotion short x gets promoted to int

    printf(" \n");

    unsigned short int y = -9;   // y = 11111111 11110111
    int iy = y;              //  iy = 00000000 00000000 11111111 11110111 (since source is unsigned 0 gets added)
    printf("%d\n",y);
    printf("%u\n",y);
    printf("%d\n",iy);
    printf("%u\n",iy);

    printf(" \n");

    int z = -1;
    unsigned int u = z;
    printf("%d\n", z);
    printf("%u\n", z);
    printf("%d\n",u);
    printf("%u\n",u);

    return 0;
}