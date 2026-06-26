#include<stdio.h>
// function declaration is missing

int main()
{
    int a;
    a = fun(2, 3);  // will throw an error because function is not declared before main
                    // compiler doesn't know that function exists or not
    printf("%d", a);
}

int fun(int x, int y) // function definition
{
    return x + y;
}
