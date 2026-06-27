//WAP to implement strlen (), strcat (),strcpy() using the concept of Functions. 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];

    gets(a);
    gets(b);

    printf("Length=%d\n",strlen(a));
    strcat(a,b);
    printf("Concat=%s\n",a);
    strcpy(b,a);
    printf("Copy=%s\n",b);

    return 0;
}
