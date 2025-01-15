// Prime Number between given range

#include <stdio.h>
int main()
{
    int a, b, c = 0;

    printf("Enter the Range: ");
    scanf("%d %d", &a, &b);

    // traverse in range
    for (int i = a; i <= b; i++)
    {
        c = 0;
        // Checks whether number is prime or not
        for (int j = 2; j < a; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            printf("%d ", i);
        }
    }
}