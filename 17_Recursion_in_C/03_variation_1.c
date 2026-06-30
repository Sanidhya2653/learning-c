#include<stdio.h>

void func()
{
    static int n = 5;

    if (n == 0)
        return;

    n--;
    printf("%d ", n);
    func();
}

int main()
{
    func();
}