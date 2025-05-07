#include <stdio.h>

int get_odd_numbers(int *arr, int size, int *odds) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            odds[count] = arr[i];
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int input[size];
    printf("Enter the elements (separated by spaces): ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &input[i]);
    }

    int odds[size]; // Worst-case scenario (all elements are odd)
    int total = get_odd_numbers(input, size, odds);

    printf("Odd numbers are: ");
    for (int i = 0; i < total; i++) {
        printf("%d ", odds[i]);
    }
    printf("\nTotal odd numbers: %d\n", total);
    return 0;
}
