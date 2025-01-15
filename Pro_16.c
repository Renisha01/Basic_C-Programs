//  WAP to sort an Array using Bubble sort

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int a[n];

    // Scan the array elements:
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        int swap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
    }

    // Print Sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}