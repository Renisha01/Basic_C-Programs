// Print a following pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d", &n);

    // traverse fro row 1 to n
    for (int i = 1; i <= n; i++)
    {
        // traverse from 1 to row
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}