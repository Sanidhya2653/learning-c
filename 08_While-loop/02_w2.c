#include<stdio.h>
int main()
{
    int weight = 75;
    while ( weight > 65 )
    {
        printf("Go, exercise, ");
        printf("then come back.\n");
        printf("Enter your weight: ");
        scanf("%d", &weight);
    }
}