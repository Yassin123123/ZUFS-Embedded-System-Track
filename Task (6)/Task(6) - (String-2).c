#include <stdio.h>

int main ()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string: %d", len);
}
