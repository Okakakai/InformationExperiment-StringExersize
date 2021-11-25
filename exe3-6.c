#include <stdio.h>

char *strcat(char *str1, const char *str2)
{
    char *top;

    top = str1;

    while (*str1++ != '\0')
    {
    };
    *str1--;

    while ((*str1++ = *str2++) != '\0')
    {
    }

    return top;
}

int main()
{
    char str1[] = "ibaraki";
    char str2[] = "kosen";
    strcat(str1, str2);
    printf("str1 : %s", str1);
    return 0;
}