#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    int year = age / 365;
    int months = (age - year * 365) / 30;
    int days = (age - (year * 365) - (months * 30)) / 1;
    printf("%d years\n%d months\n%d days\n", year, months, days);

    return 0;
}