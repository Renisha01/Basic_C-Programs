// WAP to sort an Array using Counting sort.

#include <stdio.h>

// Counting sort
void CountingSort(int a[], int size)
{
    int max = a[0];
    int i = 0;
    int k = -1;

    // Find the maximum element from an array
    for (i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int count[max + 1];

    // Initialize enery elelment of count with 0
    for (i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // Increase count of elements of count
    for (i = 0; i < size; i++)
    {
        count[a[i]]++;
    }

    for (i = 0; i <= max; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            a[++k] = i;
        }
    }

    // Print sorted array
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;

    printf("Enter the Size: ");
    scanf("%d", &n);

    int a[n];

    // Scan array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // call countingsort function
    CountingSort(a, n);
}