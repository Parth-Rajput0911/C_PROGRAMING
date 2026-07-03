#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created.");
        return 1;
    }

    fprintf(fp, "Name: Parth\n");
    fprintf(fp, "Age: 18\n");
    fprintf(fp, "Course: B.Tech CSE\n");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}