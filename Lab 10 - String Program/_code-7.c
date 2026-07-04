#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }

    j = 0;

    while(i > 0)
    {
        i--;
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';

    printf("Reversed String = %s", rev);

    return 0;
}