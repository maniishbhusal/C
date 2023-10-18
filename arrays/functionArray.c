#include <stdio.h>

int fun(int arr[])
{
    arr[0] = 125;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d\n", arr[0]);
    return 0;
}