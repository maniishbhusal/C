/*Print the given pattern:
A B C D
A B C D
A B C D
A B C D
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}