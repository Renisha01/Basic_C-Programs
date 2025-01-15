// Print a following patterns

// Inverted Triangle
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Triangle with 123 and abc
#include <stdio.h>
int main()
{
    int n, i = 0, j = 0, num = 1;
    char ch = 'A';
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i % 2 != 0 && j % 2 == 0 && j > n - i && j < n + i)
            {
                printf("%d", num);
                num++;
            }
            else if (i % 2 == 0 && j % 2 != 0 && j > n - i && j < n + i)
            {
                printf("%c", ch);
                ch++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf("*");
//         }
//         for (int k = 0; k <= 2 * i - 1; k++)
//         {
//             printf(" ");
//         }
//         for (int g = n + 1; g <= 2 * n - i; g++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }