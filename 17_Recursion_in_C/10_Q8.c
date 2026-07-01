#include<stdio.h>

void fun(int n)
{
    if (n == 0) return;
    else
    {
        fun (--n);
        printf("%d ", n);
    }
}

int main()
{
    fun (3);
}