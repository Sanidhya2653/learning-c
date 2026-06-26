#include<stdio.h>

float mul (float x, float y)
{
    float result;   // local variable
    result = x * y;  // computes the product
    return result;   // returns the result
}

int main()
{
    mul(4,5);
    printf("%f", result); // result is a local variable in funtion mul
}

/* result --> is a local variable.
A local variable exists only inside the function in which it is declared.

--> When the function finishes,

return result;
the variable result is destroyed.

--> Now main() executes

printf("%f", result);

But main() has no variable named result.

so here there are two different variables named result