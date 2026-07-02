#include<stdio.h>
void change(int *p);

int main()
{
    int x;
    x = 20;
    change(&x);
    printf("%d \n", x);

}

void change (int *p)
{
    *p = *p + 10;
}