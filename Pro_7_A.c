// WAP to find a Fibonacci series up to n terms (n is entered by user)(Iterative)

#include <stdio.h>
int main()
{
    int i = 1, j = 0, n, x = 0;
    printf("Enter the no. of term:");
    scanf("%d", &n);

    printf("0 ");

    // Print n terms of fibonacci
    while (i < n - 2)
    {
        x = i + j;
        printf("%d ", x);
        i = j;
        j = x;
    }
}