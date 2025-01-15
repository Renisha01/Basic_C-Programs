//  WAP to find a Multiplication of 2 Matrix (dimension and value should be entered by user)

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];

    // Scan 1st matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Scan 2nd matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplies two matrix and stores it in 3rd matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}