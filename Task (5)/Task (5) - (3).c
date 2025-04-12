#include <stdio.h>

int main ()
{
    int r, c;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int arr [r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c;j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%i", &arr[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
}
