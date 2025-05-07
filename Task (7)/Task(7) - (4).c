#include <stdio.h>

#define MAX 10

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", (*(A + i) + j));
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", (*(B + i) + j));
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(*(C + i) + j) = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    printf("Product of matrices is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(*(C + i) + j));
        }
        printf("\n");
    }

    return 0;
}

