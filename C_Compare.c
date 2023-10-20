#include <stdio.h>
#include <string.h>
int main()
{
    char s[21], t[21];
    scanf("%s %s", &s, &t);
    int result = strcmp(s, t);
    if (result < 0)
    {
        printf("%s", s);
    }
    else if (result > 0)
    {
        printf("%s", t);
    }
    else
    {
        printf("%s", s);
    }

    return 0;
}