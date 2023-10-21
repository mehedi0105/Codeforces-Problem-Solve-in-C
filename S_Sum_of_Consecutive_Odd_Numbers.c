

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x > y)
        {
            for (int i = y + 1; i < x; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
            printf("%d\n", sum);
        }
        else
        {
            for (int i = x + 1; i < y; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}