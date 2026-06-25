#include<stdio.h>
int main()
{
    int a = 5;
    int x = a++ + a++; // Undefined (compiler dependent)
    /* trying to modify the value of 'a' multiple times before one sequence point */

    int i = 1;
    i = i++; // this is undefined (compiler dependent)

    printf("%d\n", i);
    printf("%d\n", x);
    printf("%d", a);

    return 0;
}