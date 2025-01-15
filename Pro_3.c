// WAP to find a Factor of a given number (iterative and recursive)

#include <stdio.h>

void factor(int n, int i)
{
    // base condition , we have to stop at 1
    if (i == 1)
    {
        printf("%d ", i);
    }
    else
    {
        // checks whether n is completely divisible by i
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        // checks from n to 1, i will decrease until it becomes 1
        return factor(n, i - 1);
    }
}

int main()
{
    int n, i;
    printf("Enter the number of which you have to find factor:");
    scanf("%d", &n);
    // form 1 to n it checks factor
    for (i = 1; i <= n; i++)
    {
        // if i is completely divisible than it will print, else continue
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    // call to function factor(using recursion)
    factor(n, n);
}