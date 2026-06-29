#include<stdio.h>

int max; // max = 0 bcz global variables are by default stored in static

int main()
{
    int len;
    extern int max; // it is a way to tell compiler that there is a glbobal variable max
                    //and here this is unnecessary bcz compiler had already seen it in the start of the program

    printf("%d", max);
    max = 5;

    return 0;
}

/*
Note: in C, global variables that are not explicitly initialized are automatically initialized to
i) '0' if they are numeric type (like int, float,etc)
ii) NULL for pointers

*/

/*
#include<stdio.h>

int max; // max = 0 bcz global variables are by default stored in static

int main()
{
    int len;
   // removed extern form the code ( it will still work fine bcz this was unnecessary)
    printf("%d", max);
    max = 5;

    return 0;
}

*/