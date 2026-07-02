#include<stdio.h>

int main()
{
    int a, b;
    int c = 5;
    int *p;

    a = 4 * (c + 5);
    p = &c; // form this line *p and c are the same form now onwards
    b = 4 * (*p + 5);

    printf("a = %d b = %d \n", a, b);

    return 0;
}
