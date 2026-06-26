// Nesting if-else

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if (num > 90)
    {
        printf("You earned a A");
    }
    else
        if(num > 80)
        {
            printf("You earned a B");
        }

    return 0;
}