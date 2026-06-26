#include<stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);

    if (grade <= 10)

        printf("You did not study.\n");
        printf("You like this course!\n");

    return 0;
}

/* here there are no brackets after if so it will take immediate
     next statement and 2nd print stmt will get executed everytime  same logic follows for else

   Note: if there are no braces ( { } ) following the if statement then only the next immediate stmt belongs
   to  the if statement */

/*

o/p: 3
You did not study.
You like this course!

o/p: 11
You like this course!

*/