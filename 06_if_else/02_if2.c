#include<stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);

    if (grade <= 10)
    {
        printf("You did not study.\n");
        printf("You like this course!\n");
    }

    return 0;
}