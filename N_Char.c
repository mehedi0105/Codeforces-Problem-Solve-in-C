#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        printf("%c\n", x - 32);
    }
    else
    {
        printf("%c\n", x + 32);
    }

    return 0;
}