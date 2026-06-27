//WAP to compare the contents of two files and determine whether they same or not.
#include<stdio.h>
int main()
{
    FILE *f1,*f2;
    char c1,c2;

    f1=fopen("a.txt","r");
    f2=fopen("b.txt","r");

    while(1)
    {
        c1=fgetc(f1);
        c2=fgetc(f2);

        if(c1!=c2)
        {
            printf("Not Same");
            break;
        }

        if(c1==EOF && c2==EOF)
        {
            printf("Same");
            break;
        }
    }

    fclose(f1);
    fclose(f2);

    return 0;
}