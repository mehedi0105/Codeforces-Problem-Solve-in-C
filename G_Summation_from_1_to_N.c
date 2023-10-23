#include <stdio.h>
int main()
{
    long long n, sum = 0;
    scanf("%lld", &n);
    sum = ((n * (n + 1)) / 2);
    printf("%lld\n", sum);
    return 0;
}