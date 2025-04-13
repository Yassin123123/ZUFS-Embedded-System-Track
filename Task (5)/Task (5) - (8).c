#include <stdio.h>

int main ()
{
    int n;
    printf("Input number of elements to store in the array (max 15) : ");
    scanf("%d", &n);
    printf("Input %d number of eleements in the array: \n", n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i+2;
        printf("element - %d : %d\n", i+1, arr[i]);
    }

    printf("The elements of the array in reverse order are :\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("element - %d : %d\n", i + 1, arr[i]);
    }
}
