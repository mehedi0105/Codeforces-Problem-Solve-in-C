#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int row = n; row >= 1; row--)
//     {
//         for (int col = row; col >= 1; col--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }