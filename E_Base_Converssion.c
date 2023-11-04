#include <stdio.h>
void fun(int N)
{
    if (N == 0)
    {
        return;
    }

    int s1 = N % 2;
    fun(N / 2);
    printf("%d", s1);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        printf("\n");
    }

    return 0;
}
