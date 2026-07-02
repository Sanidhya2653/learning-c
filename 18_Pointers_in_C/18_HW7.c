#include<stdio.h>

void testPass(int, int*);

void main()
{
    int i = 5, j = 2;
    printf("i = %d,j = %d\n", i, j);
    testPass(i, &j);
    printf("i = %d,j = %d\n", i, j);
}

void testPass(int x, int *y)
{
    x++;
    (*y)++;
    printf("x = %d,y = %d \n", x, *y);
}