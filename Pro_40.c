// Given an array nums with n integers, your task is to check if it could become non - decreasing
// by modifying at most one

#include <stdio.h>
int main()
{
    int n, c = 0;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter an array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (c >= 1 && a[i] > a[i + 1])
        {
            printf("False");
            return 0;
        }
        else if (a[i] > a[i + 1])
        {
            c++;
        }
    }
    printf("True");
}