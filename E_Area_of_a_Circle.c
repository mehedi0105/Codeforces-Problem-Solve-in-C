#include <stdio.h>
int main()
{
    double R;
    scanf("%lf", &R);
    double area = 3.141592653 * (R * R);
    printf("%0.9lf\n", area);
    return 0;
}