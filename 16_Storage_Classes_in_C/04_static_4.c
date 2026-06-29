#include<stdio.h>

static int y = 1;  // global y

void fun()
{
    static int y;   // fun y ( will not be accessible outside this function)
    y = 5;
    return;
}

int main()
{
    static int y = 2;  // main y
    fun ();
    printf("%d", y);  // will print main y, bcz the global y gets overriden by the local y

    return 0;
}