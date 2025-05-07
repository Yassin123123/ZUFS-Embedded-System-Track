#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    float a, b, result;
    float (*operation)(float, float) = NULL;

    printf("Select an operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Enhanced input handling for numbers
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default: printf("Invalid choice!\n"); return 1;
    }

    result = operation(a, b);
    printf("Result: %.2f\n", result);

    return 0;
}
