// WAP to sort an Array using Merge sort.
#include <stdio.h>

// Function to sort divided array
void conquer(int a[], int si, int mid, int ei)
{
    int merged[ei - si + 1];
    int idx1 = si;
    int idx2 = mid + 1;
    int x = 0;
    while (idx1 <= mid && idx2 <= ei)
    {
        if (a[idx1] <= a[idx2])
        {
            merged[x++] = a[idx1++];
        }
        else
        {
            merged[x++] = a[idx2++];
        }
    }
    while (idx1 <= mid)
    {
        merged[x++] = a[idx1++];
    }
    while (idx2 <= ei)
    {
        merged[x++] = a[idx2++];
    }
    for (int i = 0, j = si; i < x; i++, j++)
    {
        a[j] = merged[i];
    }
}

// Function to divide array in two parts
void divide(int a[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    divide(a, si, mid);
    divide(a, mid + 1, ei);
    conquer(a, si, mid, ei);
}

int main()
{
    int n;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int a[n];

    // Scan array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // call function divide
    divide(a, 0, n - 1);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
