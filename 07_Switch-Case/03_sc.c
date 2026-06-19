#include<stdio.h>
int main()
{
    int month = 2;
    int year = 2000;
    int numDays = 0;

    switch (month)
    {
    case month:
        printf("%d", numDays);
    }

    return 0;
}

/*

   will throw an error: case label does not reduce to an integer constant
   10 |     case month:
      |     ^~~~

bcz: value after case must be known at compile time, while the value of variable is known at run time and
since the case label is variable it throws an error

Compile time = The time when the compiler translates your C/C++ code into machine code.
Run time = The time when the compiled program is actually executed.


*/