#include <stdio.h>
int main()
{
    char s;
    int a, b;
    scanf("%d %c %d", &a, &s, &b);
    if (s == '+')
    {
        int sum = a + b;
        printf("%d\n", sum);
    }
    else if (s == '-')
    {
        int sub = a - b;
        printf("%d\n", sub);
    }
    else if (s == '*')
    {
        int sub = a * b;
        printf("%d\n", sub);
    }
    else
    {
        int div = a / b;
        printf("%d\n", div);
    }

    return 0;
}