#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void hexToDec(char s[])
{
    int i = 0, length, indexPoint, cp = 0, j, c;

    char str[] = "0123456789ABCDEF";

    while (s[i] != '\0')
    {
        i++;

        if (s[i] == '.')
        {
            cp = 1;
            indexPoint = i;
        }
    }

    length = i;
    i = i - 2;
    c = 0;

    if (cp == 0)
    {
        int sum = 0;

        while (i >= 0)
        {
            j = 0;
            while (j < 16)
            {
                if (s[i] == str[j])
                {
                    break;
                }
                j++;
            }

            sum += j * pow(16, c);

            c++;
            i--;
        }

        printf("%d", sum);
    }

    else
    {
        float sum = 0;

        i = indexPoint - 1;

        while (i >= 0)
        {
            j = 0;
            while (j < 16)
            {
                if (s[i] == str[j])
                {
                    break;
                }
                j++;
            }

            sum += j * pow(16, c);

            c++;
            i--;
        }

        c = -1;
        i = indexPoint + 1;

        while (i < length - 1)
        {
            j = 0;
            while (j < 16)
            {
                if (s[i] == str[j])
                {
                    break;
                }
                j++;
            }

            sum += j * pow(16, c);

            c--;
            i++;
        }

        printf("%0.4f\n", sum);
    }
}
// void convertDecimalToOctal(double n)
// {
//     int m, d, rem, size = 0;
//     m = (int)n;
//     n = n - m;
//     int *arr1;
//     arr1 = (int *)malloc(1 * (sizeof(int)));
//     // for int number
//     while (m != 0)
//     {
//         rem = m % 8;
//         size++;
//         arr1 = (int *)realloc(arr1, size * (sizeof(int)));
//         arr1[size - 1] = rem;
//         m = m / 8;
//     }
//     // for decimal point
//     int arr2[4], ip, i;
//     double b;
//     for (i = 0; i < 4; i++)
//     {
//         b = n * 8;
//         ip = deciToInt(b);
//         arr2[i] = ip;
//         n = b - ip;
//     }
//     // print ans
//     // print int part
//     for (i = size - 1; i >= 0; i--)
//     {
//         printf("%d", arr1[i]);
//     }
//     printf(".");
//     // for decimal part
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d", arr2[i]);
//     }
// }
int main()
{
    int i = 0;
    char *s, ch;

    scanf("%c", &ch);

    s = (char *)malloc(1 * sizeof(char));
    scanf("%c", &s[i]);

    while (s[i] != '\n')
    {
        i++;
        s = (char *)realloc(s, (i + 1) * sizeof(char));
        scanf("%c", &s[i]);
    }

    i++;
    s = (char *)realloc(s, (i + 1) * sizeof(char));
    s[i] = '\0';

    hexToDec(strupr(s));
}