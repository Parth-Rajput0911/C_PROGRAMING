#include <stdio.h>
int main()
{
    int a[5] = {0, 1, 1, 1, 4}, b, freq = 0;
    printf("Enter the number :\n");
    scanf("%d", &b);
    for (int i = 0; i < 5; i++)
    {
        if (b == a[i])
        {
            freq++;
        }
    }
    printf("The Frequency of number is %d\n", freq);
    return 0;
}