// WAP to find a sum of even number into 1D array.

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of Array:");
    scanf("%d", &n);
    // create array of size n
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // checks if number is even
        if (a[i] % 2 == 0)
        {
            // if it is true than it adds it in sum
            sum += a[i];
        }
    }
    printf("%d", sum);
}