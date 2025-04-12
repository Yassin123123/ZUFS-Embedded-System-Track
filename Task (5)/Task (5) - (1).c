#include <stdio.h>

int main ()

{
    float a, b, c, d, A, B, C, D, w, x, y, z;

    printf("Enter the elements of 1st matrix\n");
    printf("Enter a11: ");
    scanf ("%f", &a);
    printf("Enter a12: ");
    scanf("%f", &b);
    printf("Enter a21: ");
    scanf("%f", &c);
    printf("Enter a22: ");
    scanf("%f", &d);

    printf("\nEnter the elements of 2nd matrix\n");
    printf("Enter b11: ");
    scanf("%f", &A);
    printf("Enter b12: ");
    scanf("%f", &B);
    printf("Enter b21: ");
    scanf("%f", &C);
    printf("Enter b22: ");
    scanf("%f", &D);

    float mat1 [4] = {a, b, c, d};
    float mat2 [4] = {A, B, C, D};

    w = a + A, x = b + B, y = c + C, z = d + D;

    float mat3 [2][2] = {{w, x}, {y, z}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf ("%f ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
