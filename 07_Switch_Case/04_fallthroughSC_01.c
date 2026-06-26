#include<stdio.h>
int main()
{
    int num = 3;

    switch(num)
    {
    case 1:
        printf("Case 1: Value is %d\n", num);

    case 2:
        printf("Case 2: Value is %d\n", num);

    case 3:
        printf("Case 3: Value is %d\n", num);

    default :
        printf("Default Value is %d\n", num);

    }

    return 0;
}

/*

You don't have break stmt after case 3 there is something called "Fallthrough"
If you don't write break it will execute all the stmt until it finds break or
it goes till closing parenthesis

*/
