//  WAP to sort an Array using Selection sort.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the size of an array:");
    scanf("%d", &n);

    int a[n];

    // Scan array elements:
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection sort
    for (int i = 0; i < n; i++)
    {
        int min = a[i];
        int pos;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }

        // swap elements
        int temp = a[i];
        a[i] = min;
        a[pos] = temp;
    }

    // print the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}