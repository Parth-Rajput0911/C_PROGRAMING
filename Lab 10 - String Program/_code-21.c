#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("First Occurrence at Position = %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Character Not Found");
    }

    return 0;
}