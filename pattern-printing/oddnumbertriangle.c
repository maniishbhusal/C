/*Print the given pattern:
1
1 3
1 3 5
1 3 5 7
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number += 2;
        }
        printf("\n");
    }
    return 0;
}