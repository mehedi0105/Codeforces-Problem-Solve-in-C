#include <stdio.h>
long long fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long faxt = fact(n - 1);

    return faxt * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long faxt1 = fact(n);
    printf("%lld", faxt1);
    return 0;
}