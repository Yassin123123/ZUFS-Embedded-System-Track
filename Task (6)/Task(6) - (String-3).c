#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], rev[50];

    printf("Enter the string : ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = len; i >= 0; i--)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reverse string is : %s", rev);
}
