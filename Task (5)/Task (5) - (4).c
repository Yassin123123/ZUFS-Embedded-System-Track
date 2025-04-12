#include <stdio.h>

int main()
{
    int n, x, y;
    printf("Enter no of elements : ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("%d ", i+1);
        arr[i] = i + 1;
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the location to be inserted: ");
    scanf("%d", &y);

    for(int i = n; i >= y; i--)
    {
        arr[i] = arr[i-1];
    }
    n++;
    arr[y-1] = x;


    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
