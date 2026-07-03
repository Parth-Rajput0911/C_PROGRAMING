#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "\nCollege: GL Bajaj");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}