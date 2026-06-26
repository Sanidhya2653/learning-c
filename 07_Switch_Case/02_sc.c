#include<stdio.h>
int main()
{
    int num = 2;
    switch (num+2)
    {
        printf("HEY");

    case 1:
        printf("Case 1: Value is %d", num);
    case 2:
        printf("Case 2: Value is %d", num);
    case 3:
        printf("Case 3: Value is %d", num);
    default :
        printf("Default value is %d", num);
    }

    return 0;
}

/* printf("HEY") will not get printed bcz switch will directly start looking for matching case */