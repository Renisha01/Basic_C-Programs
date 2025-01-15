// WAP to find a summation of a digit of a given number. (Iterative and recursive)

#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter the Number:");
    scanf("%d", &n);

    while (n > 0)
    {
        // it will add last digit
        sum += n % 10;
        // divides number by 10 in each iteration
        n = n / 10;
    }

    printf("Summation of digit is %d", sum);
}