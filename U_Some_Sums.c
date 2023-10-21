#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum1 = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum2 = 0;
        while (num > 0)
        {
            sum2 += num % 10;
            num /= 10;
        }
        if (sum2 >= a && sum2 <= b)
        {
            sum1 += i;
        }
    }

    printf("%d", sum1);
    return 0;
}
