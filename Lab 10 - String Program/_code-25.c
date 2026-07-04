#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            flag = 0;
            break;
        }

        i++;
    }

    if(flag == 1)
    {
        printf("String contains only digits.");
    }
    else
    {
        printf("String contains other characters.");
    }

    return 0;
}