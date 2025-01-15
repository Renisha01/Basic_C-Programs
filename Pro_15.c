#include <stdio.h>
int main()
{
    int n, bin = 0, rem, place = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%d", bin);
    return 0;
}