#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, count = 0, i, j, c = 0, temp, ans = 0;
    scanf("%d", &n);

    m = n;

    while (m > 0)
    {
        m = m / 10;
        count++;
    }

    int a[count];
    m = n;

    i = 0;
    while (m > 0)
    {
        a[i] = m % 10;
        m = m / 10;
        i++;
    }

    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (a[i] >= a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < count; i++)
    {
        if (a[i] == 0)
        {
            c++;
        }
    }

    i = c;
    j = 0;
    while (i < count)
    {
        ans = (ans * 10) + a[i];

        if (i == c)
        {
            ans *= pow(10, c);
        }

        i++;
    }

    printf("%d", ans);
}