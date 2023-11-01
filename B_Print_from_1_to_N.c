#include <stdio.h>
void num(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {
        num(n - 1);
        printf("%d\n", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}