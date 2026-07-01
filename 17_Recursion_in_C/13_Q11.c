#include<stdio.h>

void recurse(int i)
{
    if(--i)
    {
        printf("%d ", i);
        recurse(i);
    }
}

int main()
{
    recurse(4);
}