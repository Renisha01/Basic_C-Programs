// WAP to find a quotient and reminder of 2 number(bigger number should be divided by lower number) and
// you are not allowed to use a division and quotient operator.

#include <stdio.h>
int main()
{
    int a, b, q = 0, rem;

    printf("Enter the two number:");
    scanf("%d %d", &a, &b);

    rem = a;

    while (rem >= b)
    {
        rem -= b;
        q++;
    }

    printf("Remender = %d , Quotient = %d", rem, q);
}