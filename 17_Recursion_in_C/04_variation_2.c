#include<stdio.h>

void func()
{
    static int n=5;

    if (n == 0)
        return;

    n--;
    func();
    printf("%d ", n);
}

int main()
{
    func();
}