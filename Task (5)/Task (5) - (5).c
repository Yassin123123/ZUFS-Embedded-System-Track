#include <stdio.h>

int main()
{
    int n, x, y;
    printf("Enter no of elements : ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * 11;
        printf("%d ", arr[i]);

    }

    printf("\nEnter the element to be searched : ");
    scanf("%d", &x);

    printf("Number found at the location = %d", (x/11));
}
