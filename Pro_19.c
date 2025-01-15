#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bucketSort(float *a, int n);
void insertionSort(float *a, int size);

int main()
{
    int n, i;
    printf("Enter size of array - ");
    scanf("%d", &n);

    float a[n];

    printf("Enter the elements to be sorted (Between 0 to 1) :\n");

    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    bucketSort(a, n);

    printf("Sorted array :\n");

    for (i = 0; i < n; i++)
    {
        printf("%f ", a[i]);
    }
}

void bucketSort(float *a, int n)
{
    int i, j, k;

    // Declaring 10 buckets
    float *buc[10];

    // Declaring array which contains total number of element in each bucket
    int size[10];

    // Creating 10 buckets
    for (i = 0; i < 10; i++)
    {
        buc[i] = (float *)malloc(1 * sizeof(float));
        size[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        float b;
        b = a[i] * 10;

        int x = floor(b);

        size[x]++;

        // Realloc each bucket as per requirement
        buc[x] = (float *)realloc(buc[x], size[x] * sizeof(float));

        buc[x][size[x] - 1] = a[i];
    }

    // Sorting each bucket using Insertion sort
    for (i = 0; i < 9; i++)
    {
        insertionSort(buc[i], size[i]);
    }

    i = 0;

    // Gathering sorted buckets in actual array
    for (j = 0; j < 10; j++)
    {
        for (k = 0; k < size[j]; k++)
        {
            a[i] = buc[j][k];
            i++;
        }
    }
}

void insertionSort(float *a, int size)
{
    int i = 0, j = 1, k, l;
    float temp;

    while (i < size - 1)
    {
        if (a[j] > a[i])
        {
            i++;
            j++;
        }
        else
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;

            k = i;
            l = k - 1;
            while (l >= 0)
            {
                if (a[l] > a[k])
                {
                    temp = a[l];
                    a[l] = a[k];
                    a[k] = temp;
                    l--;
                    k--;
                }
                else
                {
                    break;
                }
            }
        }
    }
}