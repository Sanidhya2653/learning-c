#include<stdio.h>

void fun(int n)
{
    printf("%d ", n);
    for (int i = 0; i < 2; i++)
    {
        if (n > 0) fun(n - 1);
    }
}

int main()
{
    fun(2);
}
