#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char original[100], copy[100];

    printf("Enter a string to copy: ");
    fgets(original, sizeof(original), stdin);

    for (int i = 0; original[i]; i++) {
        if (original[i] == '\n') original[i] = '\0';
    }

    copyString(original, copy);

    printf("Original String: %s\n", original);
    printf("Copied String: %s\n", copy);

    return 0;
}
