//  WAP to find weather given number is Armstrong number is not.

#include <stdio.h>
int main()
{
    int n, rem, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 10;
        sum += (n * n * n);
        n = n / 10;
    }
    if (sum == n)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
}