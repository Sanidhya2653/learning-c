#include<stdio.h>

void swap (int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 3;
    int b = 4;
    swap (a,b);
    printf("a = %d, b = %d", a, b);

    return 0;
}


// o/p -->> pf(x,y) = 4,3


/* Every function has it's own "Activation Record" in compiler.
 * and inside that you have all the local variables

 The moment you return the function the "Activation Record" of that function gets destroyed

"Activation Record": An activation record (also called a stack frame) is a block of memory
created every time a function is called. It stores all the information needed for that function
to execute correctly and return to the caller.

It is usually stored on the call stack.
*/