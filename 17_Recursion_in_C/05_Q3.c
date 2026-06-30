#include<stdio.h>

int recursiveFunc (int n)
{
    static int count = 0;
    if (n <= 0)
        return count;
    count ++;
    return recursiveFunc (n-1);
}

int main()
{
    int result = recursiveFunc (5);
    printf("Result: %d\n", result);
}