#include <stdio.h>
#include <limits.h>
int max(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int max1 = max(a, n, i + 1);
    if (a[i] > max1)
    {
        return a[i];
    }
    else
    {
        return max1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = max(arr, n, 0);
    printf("%d", res);
    return 0;
}