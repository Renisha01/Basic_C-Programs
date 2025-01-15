//  WAP to sort an Array using insertion sort.

#include <stdio.h>
int main()
{
    int n, i, j, key;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int a[n];

    // Scan Array Elements
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Insertion sort
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    // Print sorted array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}