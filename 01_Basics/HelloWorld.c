#include <stdio.h>
int main()
{
    printf("Hello World!\n");
    return 0;   //if i don't write this it will still compile because Since C99,
                //the C standard says that if execution reaches the end of main() without a return statement,
               //it is treated as if: return 0; was written automatically.
}