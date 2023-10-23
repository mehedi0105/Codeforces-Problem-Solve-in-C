#include <stdio.h>
int main()
{
    int i;
    long long ll;
    char ch;
    float f;
    double d;
    scanf("%d %lld %c %f %lf", &i, &ll, &ch, &f, &d);
    printf("%d\n%lld\n%c\n%0.2f\n%0.1lf\n", i, ll, ch, f, d);
    return 0;
}