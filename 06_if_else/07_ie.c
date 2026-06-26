// Matching if-else parts

#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a < 10)
        if (a%2 == 0)
            printf("a is even and less than 10\n");
    else
        printf("mystery");

    return 0;
}
/* Note: else is always associated with the closest if
 * irrespective of indentation (ie adding spaces or tabs at the beginning of the line)
 */