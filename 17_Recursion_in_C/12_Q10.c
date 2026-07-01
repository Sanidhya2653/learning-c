#include<stdio.h>

void recurse()
{
    static int i = 4;
    printf("%d ", i);
    if (--i)
    {
        recurse();
    }
}

int main()
{
    recurse();
}