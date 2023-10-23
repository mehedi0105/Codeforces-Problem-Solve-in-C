#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long sum, sub;
    long long mul = 1;
    sum = a + b;
    mul = a * b;
    sub = a - b;
    printf("%lld + %lld = %lld\n", a, b, sum);
    printf("%lld * %lld = %lld\n", a, b, mul);
    printf("%lld - %lld = %lld\n", a, b, sub);
    return 0;
}