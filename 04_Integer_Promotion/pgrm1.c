#include<stdio.h>
int main()
{
    char c = 'a';
    printf("%c\n", c);
    printf("%d\n", c);

    // What is actually stored in memory for c? Does it store 'a' or does it refer to the ASCII table?
    // The memory stores only the number 97 (or 01100001 in binary).
    // It does not store the character 'a' as some special symbol
    // It does not store a pointer/reference to the ASCII table
    return 0;
}