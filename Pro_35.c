// Given two integer arrays nums1 and nums2, return an array of their intersection.
// Each element in the result must appear as many times as it shows in both arrays and
// you may return the result in sorted order.

#include <stdio.h>
int main()
{
    int x, y, i, j, count = 0, temp;

    printf("Enter the size of two arrays:");
    scanf("%d %d", &x, &y);

    int a[x], b[y], c[x];

    // Scan array 1
    printf("Enter the element of 1st array:\n");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    // Scan array 2
    printf("Enter the element of 2nd array:\n");
    for (i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }

    // Sort array 1
    for (i = 0; i < x; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Sort array 2
    for (i = 0; i < y; i++)
    {
        for (j = i + 1; j < y; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (i = 0; i < x; i++)
    {
        j = 0;
        while (j < y)
        {
            if (a[i] == b[j])
            {
                c[i] = a[i];
                j++;
                count++;
            }

            else if (a[i] > b[j])
            {
                j++;
            }
            else
            {
                break;
            }
        }
    }
    for (i = 0; i < x; i++)
    {
        printf("%d ", c[i]);
    }
}