// Given an array, rotate the array to the right by k steps, where k is non-negative.

#include <stdio.h>
int main()
{
    int n, i, k, j, x = 0;

    printf("Enter the size of array and k: ");
    scanf("%d %d", &n, &k);

    int a[n], b[n];

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    j = k - 1;

    // steps to rotate an array
    for (i = n - 1; j >= 0; i--)
    {
        b[j] = a[i];
        j--;
    }
    for (i = k; i < n; i++)
    {
        b[i] = a[x];
        x++;
    }

    // print rotated array
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}