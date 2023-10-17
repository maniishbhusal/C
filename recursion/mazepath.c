/*
  Unique Paths
  There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
  The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
  The robot can only move either down or right at any point in time.

  Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
*/

#include <stdio.h>

// Recursive function to calculate the number of unique paths in a maze
int maze(int n, int m)
{
    int rightWays = 0;
    int downWays = 0;

    // Base case: there is only one way for a 1x1 grid
    if (n == 1 && m == 1)
        return 1;
    // If only one row, the robot can only move right
    else if (n == 1)
        rightWays += maze(n, m - 1);
    // If only one column, the robot can only move down
    else if (m == 1)
        downWays += maze(n - 1, m);
    // If more than one row and one column, consider both right and down moves
    else if (n > 1 && m > 1)
    {
        rightWays += maze(n, m - 1);
        downWays += maze(n - 1, m);
    }

    // Total ways is the sum of right and down moves
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main()
{
    int n;
    printf("Enter the number of rows of the maze: ");
    scanf("%d", &n);

    int m;
    printf("Enter the number of columns of the maze: ");
    scanf("%d", &m);

    // Calculate and display the total number of ways
    printf("The total ways are %d.", maze(n, m));
    return 0;
}
