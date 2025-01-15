// WAP to find whether a number is Odd or Even without using a % operator.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    int temp = n / 2;
    if (temp * 2 == n)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}