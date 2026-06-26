/* printf using a std function vs user defined function */

/*
#include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
*/

#include<stdio.h>
int hello ()
{
    printf("Hello World\n");
    return 0;
}
int main()
{
    hello();
    hello();
    hello();
    hello();

    return 0;
}