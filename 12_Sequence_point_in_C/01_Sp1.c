#include<stdio.h>
int main()
{
    int a = 5;
    int x = a++; // after the semicolon a gets incremented in new line
                 // semicolon is a sequence point
    printf("%d\n", x);
    printf("%d\n", a);

    return 0;
}