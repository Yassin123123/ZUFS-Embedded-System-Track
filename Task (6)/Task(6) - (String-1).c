#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char freq;

    printf("Enter a string: ");
    scanf("%s", &str);

    fflush(stdin);

    printf("Enter a character to find frequency: ");
    scanf("%c", &freq);

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(freq == str[i])
        {
            count++;
        }
    }
    printf("Frequency of %c = %d", freq, count);
}
