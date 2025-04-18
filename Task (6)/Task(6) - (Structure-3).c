#include <stdio.h>

struct num
{
    float real;
    float imaginary;
}first, second;

float w, x, y, z;
void sum()
{
    printf ("%.1f + %.1fi", w + x, y + z);
}

int main()
{
    printf("For 1st complex number");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &first.real, &first.imaginary);

    printf("For 2nd complex number");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &second.real, &second.imaginary);

    w = first.real, x = second.real, y = first.imaginary, z = second.imaginary;
    sum();
}
