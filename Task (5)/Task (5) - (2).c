#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter the number of data: ");
    scanf("%i", &n);

    float arr[n];

    for (int i = 0; i < n; i++)
    {

        printf("%i. Enter number: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    float z = sum/n;
    printf("Average = %f", z);
}
