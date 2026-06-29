#include<stdio.h>

int main()
{
    int len;
    extern int max; /* this line is telling to the compiler that
                     don't worry, there is a global variable, max which is either in this file or in another file */
    printf("%d", max);
    max = 5;

    return 0;
}

int max;


/* Note: Common practice is to place definitions of all external variables at the beginning of source file and
 * then omit all the extern declarations

 --> extern is not useful with one file but it is useful with 2 or more files