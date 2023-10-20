#include <stdio.h>
#include <string.h>
int main()
{
    char arry[10];
    scanf("%s", arry);
    int count[10] = {0};
    for (int i = 0; i < strlen(arry); i++)
    {
        int value = arry[i] - 97;
        count[value]++;
    }
    int sum = 0;
    for (int i = 0; i <= strlen(arry); i++)
    {
        sum += arry[i];
    }
    printf("%d", sum);
    return 0;
}