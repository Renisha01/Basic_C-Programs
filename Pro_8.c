// WAP to find a total odd and total even digit of a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the digit:");
    scanf("%d", &n);
    int so = 0, se = 0;
    // iterate till n becomes 0
    while (n > 0)
    {
        int rem = n % 10;
        // if digit is even it will add to se
        if (rem % 2 == 0)
        {
            se += rem;
        }
        // if digit is odd it will add to so
        else
        {
            so += rem;
        }
        n = n / 10;
    }
    printf("Sum of Even = %d\n", se);
    printf("Sum of Odd = %d", so);
}