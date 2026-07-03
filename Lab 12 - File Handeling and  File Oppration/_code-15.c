#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("student.txt", "r");
    fp2 = fopen("vowels.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            fputc(ch, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);

    printf("Vowels copied successfully.");

    return 0;
}