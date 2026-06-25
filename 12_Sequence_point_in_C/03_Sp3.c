/* Sequence point in C (means after that point the changes will definitely take place
 * ; (semicolon)
 * if(), for(), while(), switch
 * ? : (conditional operator)
 * ||, && (logical operator)
 */

#include<stdio.h>
int main()
{
    int i = 3;
    if(i++)
    {
        printf("%d", i);
    }

    return 0;
}