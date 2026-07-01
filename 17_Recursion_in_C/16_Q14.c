#include<stdio.h>

void func2(int n);

void func1(int n)
{
    if (n > 0)
    {
        printf("func1: %d\n", n);
        func2(n - 1);
    }
}

void func2(int n)
{
    if (n > 0)
    {
        printf("func2: %d\n", n);
        func1(n - 1);
    }
}

int main()
{
    func1(3);
    return 0;
}
