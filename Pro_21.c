// Radix Sort
#include <stdio.h>
void countingsort(int a[], int size, int place)
{
    int array[size + 1];
    int count[10] = {0};

    for (int i = 0; i < size; i++)
    {
        count[(a[i] / place) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
    printf("\n");
    for (int i = size - 1; i >= 0; i--)
    {
        array[count[(a[i] / place) % 10] - 1] = a[i];
        count[(a[i] / place) % 10]--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        a[i] = array[i];
    }
}

void radixsort(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int digit = 0;
    int temp = max;
    while (temp > 0)
    {
        digit++;
        temp = temp / 10;
    }
    for (int i = 1; max / i > 0; i *= 10)
    {
        countingsort(a, n, i);
    }
}
int main()
{
    int a[] = {802, 456, 226, 23, 119, 7343, 145};
    int n = sizeof(a) / sizeof(int);
    radixsort(a, n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", a[i]);
    }
}