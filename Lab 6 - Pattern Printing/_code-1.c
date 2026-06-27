#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter The No of Rows\n");
    scanf("%d", &m);
    printf("Enter The NO of Cols\n");
    scanf("%d", &n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}