// WAP to delete an element from array specified by user.if element is not found print a
// message “Element is not found”(do not take a new array)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, x, flag = 0;

    printf("Enter size of array - ");
    scanf("%d\n", &n);

    int *a;

    a = (int *)malloc(n * sizeof(int));

    // Scan array element
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number you want to delete - ");
    scanf("%d", &x);

    // if element exists or not
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Element not found");
        free(a);
        return 0;
    }

    for (i; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Decrease array size by 1
    a = (int *)realloc(a, (n - 1) * sizeof(int));

    // Print modified array
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}