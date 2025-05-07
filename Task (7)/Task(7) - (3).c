#include <stdio.h>

void sortArray(int *arr, int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && *(arr + i) > *(arr + j)) ||
                (!ascending && *(arr + i) < *(arr + j))) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Input:\nArray elements ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    sortArray(arr, n, 1);
    printf("Output:\nArray in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    sortArray(arr, n, 0);
    printf("\nArray in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
