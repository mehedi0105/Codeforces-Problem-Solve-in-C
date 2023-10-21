
// #include <stdio.h>

// int main()
// {
//     int N, M;

//     while (1)
//     {

//         scanf("%d %d", &N, &M);
//         int sum = 0;
//         if (N <= 0 || M <= 0)
//         {
//             break;
//         }
//         else if (N > M)
//         {
//             for (int i = M; i <= N; i++)
//             {
//                 printf("%d ", i);
//                 sum = sum + i;
//             }
//         }
//         else
//         {
//             for (int i = N; i <= M; i++)
//             {
//                 printf("%d ", i);
//                 sum = sum + i;
//             }
//         }
//         printf("sum =%d\n", sum);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {

        int sum = 0;
        if (n <= 0 || m <= 0)
        {
            break;
        }
        else
        {
            if (n < m)
            {

                for (int i = n; i <= m; i++)
                {
                    printf("%d ", i);
                    sum = sum + i;
                }
            }
            else
            {
                for (int i = m; i <= n; i++)
                {
                    printf("%d ", i);
                    sum = sum + i;
                }
            }
            printf("sum =%d\n", sum);
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, m;
//     while (scanf("%d %d", &n, &m) != EOF)
//     {

//         int min, max;
//         if (n > m)
//         {
//             min = m;
//         }
//         else if (n < m)
//         {
//             min = n;
//         }
//         if (n > m)
//         {
//             max = n;
//         }
//         else if (n < m)
//         {
//             max = m;
//         }
//         int sum = 0;
//         if (min <= 0 || max <= 0)
//         {
//             break;
//         }

//         for (int i = min; i <= max; i++)
//         {
//             printf("%d ", i);
//             sum += i;
//         }
//         printf("sum =%d\n", sum);
//     }
// }