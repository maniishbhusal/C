#include <stdio.h>
#define N 5

int main() {
    int arr[N];

    // Input elements into the array
    for (int i = 0; i < N; i++) {
        printf("\nEnter %dth element of the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\nOriginal Array\n");
    for (int i = 0; i < N; i++)
        printf("%d\t", arr[i]);

    // Display reversed array
    printf("\n\nReversed Array\n");
    for (int i = N - 1; i >= 0; i--)
        printf("%d\t", arr[i]);

    return 0;
}
