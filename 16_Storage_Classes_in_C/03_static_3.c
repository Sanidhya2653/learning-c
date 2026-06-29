#include<stdio.h>

static int y = 5;  // global y = 5;

void fun()
{
    static int y;  // fun y = 0
    y++;           // fun y = 1
    return;
}

int main()
{
    fun();
    printf("%d ", y); // the fun y will not be accessible outside the block
                            // therefore y in the main fun will print the global y
    return 0;
}