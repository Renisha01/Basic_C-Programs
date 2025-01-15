// WAP to Convert a Decimal to Hexa - decimal and vice versa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void decToHex(float n);

void withFloatingPoint(float n);

void hexToDec(char s[]);

int main()
{
    int t;

    printf("Enter 1 for Decimal to Hexadecimal & 2 for Hexadecimal to Decimal - ");
    scanf("%d", &t);

    if (t == 1)
    {
        float n;
        printf("Enter Decimal digit - ");

        scanf("%f", &n);

        decToHex(n);
    }
    else if (t == 2)
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
}

void decToHex(float num)
{
    float in;
    in = floor(num);

    int n;
    n = in;

    int rem, size = 0, i, j;
    int *arr;

    char s[] = "0123456789ABCDEF";

    arr = (int *)malloc(1 * sizeof(int));

    while (n > 0)
    {
        rem = n % 16;

        size++;

        arr = (int *)realloc(arr, size * (sizeof(int)));

        arr[size - 1] = rem;

        n = n / 16;
    }

    for (i = size - 1, j = 0; i >= 0; i--, j++)
    {
        printf("%c", s[arr[i]]);
    }

    if (num != in)
    {
        float diff;
        diff = num - in;

        withFloatingPoint(diff);
    }
}

void withFloatingPoint(float n)
{
    int c = 0, rem, temp;

    char s[] = "0123456789ABCDEF";

    printf(".");

    while (c < 4)
    {
        n = n * 16;

        temp = floor(n);

        printf("%c", s[temp]);

        if (n == temp)
        {
            break;
        }

        n = n - temp;

        c++;
    }
}

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
