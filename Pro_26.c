#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, ans = 0, temp = 0, c = 0, digit;
    printf("Enter binary num - ");
    scanf("%lld", &n);

    temp = n;

    while (n > 0)
    {
        digit = n % 10;
        ans += digit * pow(2, c);
        n = n / 10;
        c++;
    }

    // while (n > 0)
    // {
    //     if (n % 10 != 0)
    //     {
    //         break;
    //     }
    //     c++;
    //     n /= 10;
    // }

    // n = temp;
    // temp = 0;
    // while (n > 0)
    // {
    //     temp = (temp * 10) + (n % 10);

    //     n /= 10;
    // }

    // while (temp > 0)
    // {
    //     if (temp % 10 == 1)
    //     {
    //         ans *= 2;
    //         ans++;
    //     }
    //     else
    //     {
    //         ans *= 2;
    //     }
    //     temp /= 10;
    // }

    // while (c > 0)
    // {
    //     ans *= 2;
    //     c--;
    // }

    printf("%lld", ans);
}