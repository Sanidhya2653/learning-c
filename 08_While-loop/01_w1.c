#include<stdio.h>
int main()
{
    int count = 0;
    while ( count < 100 )
    {
        printf("Programming is fun!\n");
        count = count + 1;  // if we remove this increment condition it will go inside an infinite loop
    }

    return 0;
}

/*
   it goes inside an infinite loop because the count value will be zero and will always make the condition true
 */



/* Comparing with if stmts

count = 0;
if ( count < 100 )
 {
    printf("Programming is fun!\n");
    count = count + 1;
 }

o/p: Programming is fun

 will only print 1 time doesn't go inside a loop

*/