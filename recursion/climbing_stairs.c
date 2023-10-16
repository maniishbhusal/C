/* You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? */
#include <stdio.h>

int climbingStairs(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return climbingStairs(n - 1) + climbingStairs(n - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ways = climbingStairs(n);
    printf("The total no of ways to climb a stair is %d.", ways);
}