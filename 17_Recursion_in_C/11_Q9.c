#include<stdio.h>

void recurse()
{
    static int i = 4;
    if (--i)
    {
        recurse();
        printf("%d ", i);
    }
}

int main()
{
    recurse();
}
