#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of stars you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}