// WAP to find a power a^b (without using power and multiplication operation)

#include <stdio.h>
int main()
{
    int a, b, temp = 0;

    printf("Enter the base and exponent:");
    scanf("%d %d", &a, &b);

    int base = a;

    // find power a^b
    for (int i = 1; i < b; i++)
    {
        temp = 0;
        for (int j = 1; j <= a; j++)
        {
            temp += base;
        }
        base = temp;
    }

    printf("Answer = %d", temp);
}