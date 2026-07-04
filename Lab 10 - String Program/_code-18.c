#include <stdio.h>

int main()
{
    char str[100];
    char oldChar, newChar;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter new character: ");
    scanf(" %c", &newChar);

    while(str[i] != '\0')
    {
        if(str[i] == oldChar)
        {
            str[i] = newChar;
        }
        i++;
    }

    printf("Updated String = %s", str);

    return 0;
}