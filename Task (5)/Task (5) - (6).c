#include <stdio.h>

int main()
{
    int m = 29;
    printf("Address of m : %d", (int*)&m);
    printf("\nValue of m : %d", m);

    int *ab = &m;
    printf("\nNow ab is assigned with the address of m.");
    printf("\nAddress of ab : %d", (int*)ab);
    printf("\nValue of ab : %d", *ab);

    m = 34;
    printf("\nThe value of m is assigned to 34 now.");
    printf("\nAddress of ab : %d", (int*)ab);
    printf("\nValue of ab : %d", *ab);

    *ab = 7;
    printf("\nThe pointer variable ab is assigned with the value 7 now.");
    printf("\nAddress of m : %d", (int*)&m);
    printf("\nValue of m : %d", m);
}
