#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i]; i++) {
        if (str1[i] == '\n') str1[i] = '\0';
    }
    for (int i = 0; str2[i]; i++) {
        if (str2[i] == '\n') str2[i] = '\0';
    }

    if (compareStrings(str1, str2)) {
        printf("Both strings are Identical\n");
    } else {
        printf("Strings are not Identical\n");
    }

    return 0;
}

