#include<stdio.h>

float mul (float x, float y)
{
    float result;   // local variable
    result = x * y;  // computes the product
    return result;   // returns the result
}

int main()
{
    float x;
    x = mul(4,5);
    printf("%f", x);

    return 0;
}

/* "**** another way ****"

#include<stdio.h>

float mul (float x, float y)
{
float result;            // local variable
result = x * y;          // computes the product
printf("%f", result);
return result;           // returns the result ie returns 20 to the main function but mul(4,5)
                        //You didn't store (like x = mul(4,5) or use the returned value.
                       //So the returned value is discarded.
}

int main()
{
mul(4,5);
return 0;
}

*/