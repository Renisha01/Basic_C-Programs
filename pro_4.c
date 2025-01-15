// WAP to find a factorial of a given integer (iterative and recursive)

#include <stdio.h>

// to find factorial using recursion
int factorial(int n)
{
    // base condition()
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, ans = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);

    // multiplication from 1 to n
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    printf("Factorial of %d is %d\n", n, ans);

    // call to funtion factorial
    printf("Factorial of %d is %d\n", n, factorial(n));
}