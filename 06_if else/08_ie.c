// Dangling if-else problem
// if brackets are not there then it is called dangling if-else problem

#include<stdio.h>
int main()
{
    int i=1, j=5, k=4, number;

    if (i>j)
        if(i>k)
            number = i;
    else
        number = k;
    else
        if (j>k)
            number = j;
    else
        number = k;

    printf("%d", number);

    return 0;
}