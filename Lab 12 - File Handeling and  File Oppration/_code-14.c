#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("student.txt", "r");
    fp2 = fopen("uppercase.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(toupper(ch), fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted to uppercase.");

    return 0;
}