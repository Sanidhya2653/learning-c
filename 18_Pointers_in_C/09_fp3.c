#include<stdio.h>
void swap(int *a, int *b)
{
    int *t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x, y;
    x = 100;
    y = 200;

    printf("Before call: x = %d and y = %d \n\n", x, y);
    swap(&x, &y);
    printf("After call: x = %d and y = %d \n\n", x, y);

    return 0;
}