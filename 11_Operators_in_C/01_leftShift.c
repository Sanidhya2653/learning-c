#include<stdio.h>
int main()
{
    int x, y=10, z;
    x = y << 1; //if you are shifting to the left it is multiplication by 2, here 2^1
    z = y << 2; // multiply by 2^2
    printf("%d\n", x);
    printf("%d", z);
    return 0;
}

/* Validity for if you are shifting to the left it is multiplication by 2
 * is true only when we are not dropping any 1's while shifting
 */
