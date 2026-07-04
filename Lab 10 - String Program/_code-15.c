#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, spaces = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            spaces++;
        }

        i++;
    }

    printf("Number of Spaces = %d", spaces);

    return 0;
}