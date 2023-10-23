#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long rem1 = a % 10;
    long long rem2 = b % 10;
    long long sum = rem1 + rem2;
    printf("%lld\n", sum);
    return 0;
}