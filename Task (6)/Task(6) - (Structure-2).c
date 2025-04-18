#include <stdio.h>

struct dist
{
    int feet;
    float inch;
};

int main()
{
    struct dist first;
    struct dist second;
    float x;
    int y, z;

    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &first.feet);
    fflush(stdin);
    printf("Enter inch: ");
    scanf("%f", &first.inch);

    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &second.feet);
    printf("Enter inch: ");
    scanf("%f", &second.inch);

    if(second.inch + first.inch >= 12)
    {
        x = 12 - (second.inch + first.inch);
        y = 1;
    }
    else
    {
        x = second.inch + first.inch;
        y = 0;
    }
    z = first.feet + second.feet + y;
    printf("Sum of distances= %d '%.2f'", z, x);
}
