#include <stdio.h>

size_t strlength(const char *str)
{

    size_t len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

int main()
{
    char str[] = "konichiwa";
    size_t len;

    len = strlength(str);
    printf("length : %d", len);
    return 0;
}