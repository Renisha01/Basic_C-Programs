#include <stdio.h>
int main()
{
    int n, rem = 0, x, y = 0, digit, tem = 0, count = 0, countn = 0, diff, b, countf = 0;
    printf("Enter n - ");
    scanf("%d", &n);

    while (n > 0)
    {
        rem = n % 2;
        y = (y * 10) + rem;
        n = n / 2;
        count++;
    }

    while (y > 0)
    {
        digit = y % 10;
        tem = tem * 10 + digit;
        y = y / 10;
        countn++;
    }

    diff = count - countn;
    b = tem;

    if (diff != 0)
    {
        while (countf < diff)
        {
            b = b * 10;
            countf++;
        }
    }
    printf("%d", b);
    return 0;
}
