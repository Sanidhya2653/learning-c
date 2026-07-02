#include<stdio.h>

int main()
{
    int a = 5;
    int *p = &a; /* p is a pointer to a (ie it is pointing to a)
                    int *p = &a; is same as int *p;
                                             p = &a;  */

    printf("%p \n", &a);
    printf("%p", p);

    return 0;
}

/* Pointer is a variable that contains an address */
