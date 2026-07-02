// Passing a pointer to a function lec 8c

#include<stdio.h>
fun();

int main()
{
    int x;
    x = 20;
    fun (x);
    printf("%d \n", x);
}

fun (int a)
{
    a = a + 1;
}