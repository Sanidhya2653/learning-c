#include<stdio.h>

void recurse(int i)
{
    printf("%d ", i);
    if(--i)
    {
        recurse (i);
    }
}

int main()
{
    recurse(4);
}