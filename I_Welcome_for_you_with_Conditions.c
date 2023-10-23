#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if ((a > b) || (a == b))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}