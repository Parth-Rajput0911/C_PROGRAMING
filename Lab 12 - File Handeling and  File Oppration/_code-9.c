#include <stdio.h>

int main()
{
    FILE *fp;
    char name[30];
    int age;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File Error");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    fprintf(fp, "Name = %s\n", name);
    fprintf(fp, "Age = %d\n", age);

    fclose(fp);

    printf("Record Saved.");

    return 0;
}