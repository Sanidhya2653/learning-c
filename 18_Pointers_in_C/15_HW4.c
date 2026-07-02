#include<stdio.h>

int main(void)
{
    int x = 5, y = 15;
    int *p1, *p2;

    p1 = &x;
    printf("x = %d and y = %d \n", x, y);
    p2 = &y;
    printf("x = %d and y = %d \n", x, y);
    *p1 = 10;
    printf("x = %d and y = %d \n", x, y);
    *p2 = *p1;
    printf("x = %d and y = %d \n", x, y);
    p1 = p2;
    printf("x = %d and y = %d \n", x, y);
    *p1 = *p2 + 10;
    printf("x = %d and y = %d \n", x, y);
}