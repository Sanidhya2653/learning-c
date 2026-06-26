#include<stdio.h>
int main()
{
    int value = 0;
    switch (value)
    {
    default: value++;
    case 2: printf("Humans are human centric ");
        break;
    case 1: printf("This is in human");
    }
    printf("%d", value);

    return 0;
}