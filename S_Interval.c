#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n > 0 && n <= 25)
    {
        printf("Interval [0,25]\n");
    }
    else if (n > 25 && n <= 50)
    {
        printf("Interval (25,50]\n");
    }
    else if (n > 50 && n <= 75)
    {
        printf("Interval (50,75]\n");
    }
    else if (n > 75 && n <= 100)
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }

    return 0;
}