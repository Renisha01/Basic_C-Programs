// WAP to calculate an angle between hour and minute hand.(Hours and minutes should be taken from user)

#include <stdio.h>
#include <math.h>
int main()
{
    int h, m;
    double angle, hangle, mangle;

    printf("Enter the hour:");
    scanf("%d", &h);
    printf("Enter the minute:");
    scanf("%d", &m);

    if (h == 12)
    {
        h = 0;
    }

    hangle = 0.5 * ((60 * h) + m);
    mangle = 6 * m;
    angle = (hangle - mangle);

    if (angle < 0)
    {
        angle = -1 * angle;
    }

    printf("Angle between hour and Minute hand is %lf", angle);
}