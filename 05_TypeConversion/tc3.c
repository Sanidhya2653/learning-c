#include<stdio.h>
int main()
{
    int x = 10;
    int y = 3;
    float result1, result2, result3;

    result1 = x/y;  // x/y is int division which gives o/p 3 which gets converted to float bcz of result1 data type
    result2 = (float) x/y; // we are explicitly converting x to float so the ans of the entire divsion itself is 3.333 instead of just 3 which was get converted to 3.0000
    result3 = x/(float)y; // explicit type conversion of y

    printf("result1 = %f\n", result1);
    printf("result2 = %f\n", result2);
    printf("result3 = %f\n", result3);

    return 0;
}