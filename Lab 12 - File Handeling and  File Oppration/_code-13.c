#include <stdio.h>

int main()
{
    FILE *fp;
    char ch, search;
    int found = 0;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    printf("Enter character to search: ");
    scanf(" %c", &search);

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == search)
        {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found)
        printf("Character found.");
    else
        printf("Character not found.");

    return 0;
}