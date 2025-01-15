// Sliding Window Problem
// WAP to implement a sliding window problem.You are given an array of integers nums,
// there is a sliding window of size k which is moving from the very left of the array to the
// very right.You can only see the k numbers in the window.Each time the sliding window
// moves right by one position.

#include <stdio.h>
int main()
{
    int n, k, x, j = 1;

    printf("Enter the size of an array and k: ");
    scanf("%d %d", &n, &k);

    int a[n], max[n];

    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Stores maximum element of window in new array
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        x = a[temp];
        for (j = 0; j < k - 1; j++)
        {
            if (a[temp + 1] > x)
            {
                x = a[temp + 1];
            }
            temp++;
        }
        a[i] = x;
    }

    for (int i = 0; i < n - k + 1; i++)
    {
        printf("%d ", a[i]);
    }
}