#include <stdio.h>

int main()
{
    printf("Alphabets are : ");
    for(int i = 65; i < 91; i++)
    {
        char x = (char)i;
        char *Alpha = &x;
        printf("%c ", *Alpha);
    }
}
