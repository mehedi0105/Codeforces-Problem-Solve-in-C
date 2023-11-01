#include <stdio.h>
void num(int n)
{
    if (n < 1)
    {
        return;
    }
    else
    {

        printf("%d", n);
        if (0 < n)
        {
            printf(" ");
        }
        num(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    num(n);
    return 0;
}