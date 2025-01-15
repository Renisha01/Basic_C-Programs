// WAP to enter an element at specific position into array. (Do not take a new array)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i = 0;

    printf("Enter the size of Array:");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));

    // Scan array element
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index at which you want to insert:");
    int idx;
    scanf("%d", &idx);

    printf("Enter the Element you want to insert:");
    int element;
    scanf("%d", &element);

    // Increase size of array by 1
    a = (int *)realloc(a, (n + 1) * sizeof(int));

    for (i = n + 1; i >= idx; i--)
    {
        if (i == idx)
        {
            a[i] = element;
            break;
        }
        else
        {
            a[i] = a[i - 1];
        }
    }

    // Print modified array
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
}