#include <stdio.h>

int main ()
{
    float x, y;
    printf("Enter value of a: ");
    scanf("%f", &x);
    printf("Enter value of b: ");
    scanf("%f", &y);
    printf("After swapping, value of a: %0.2f\n", y);
    printf("After swapping, value of b: %0.2f\n", x);
    return 0;
}
