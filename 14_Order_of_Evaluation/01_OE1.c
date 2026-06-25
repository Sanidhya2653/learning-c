/* Order of evaluation matter in logical || and && bcz these are sequence points */
// Order of evaluation is left to right for logical && and ||

#include<stdio.h>
int main()
{
    int i = 1;
    if (i++ && (i==1)) // i is 1 during i++ and 2 during i==1
        printf("Yes\n");
    else
        printf("No");

    return 0;
}