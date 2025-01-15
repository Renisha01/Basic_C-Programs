// Given an array of N integers, and an integer K, find the number of pairs of elements in the
// array whose sum is equal to K.

#include <stdio.h>
int main()
{
    int n, k, sum = 0, i, j, ans = 0;

    printf("Enter the size of array and k: ");
    scanf("%d %d", &n, &k);

    int a[n];

    printf("Enter the array elemetns\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // finds pairs whose count is equal to k
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                ans++;
            }
        }
    }

    printf("Number of pairs = %d", ans);
}
