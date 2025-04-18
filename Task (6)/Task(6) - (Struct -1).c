#include <stdio.h>

struct info
{
    char Name[50];
    int Roll;
    float Marks;
};

int main()
{
    struct info student;

    printf("Enter name: ");
    scanf("%s", student.Name);

    printf("Enter roll number: ");
    scanf("%i", &student.Roll);

    printf("Enter marks: ");
    scanf("%f", &student.Marks);

    printf("Displaying Information\n");

    printf("Name: %s\n", student.Name);
    printf("Roll: %i\n", student.Roll);
    printf("Marks: %.2f", student.Marks);
}
