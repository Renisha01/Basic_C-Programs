//  WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value
// should be taken from user (Note that you are not allowed to use an array for this)

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 0, sum = 0, min, max, a;
    float avg = 0.0;

    scanf("%d", &a);
    max = a, min = a;

    // scans n number and find min , max and sum
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &a);
        sum += a;

        // Checks whether number is greater than max or not
        if (a > max)
        {
            max = a;
        }

        // Checks whether the number is lesser than min or not
        if (a < min)
        {
            min = a;
        }
    }
    avg = sum / n;
    printf("Max=%d\n", max);
    printf("Min=%d\n", min);
    printf("Average=%f\n", avg);
}