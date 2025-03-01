#include <stdio.h>
int main ()
{
    float x,y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    printf("Product: %0.6f\n", x * y);
    return 0;
}
