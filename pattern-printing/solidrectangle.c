#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter no of rows: ");
    scanf("%d", &m);
    printf("Enter no of columns: ");
    scanf("%d", &n);
    for (int i = 1; i <= m; i++)
    { // outer loop --> no of lines
        for (int i = 1; i <= n; i++)
        { // inner loop --> no of stars in each line
            printf("*");
        }
        printf("\n");
    }
    return 0;
}