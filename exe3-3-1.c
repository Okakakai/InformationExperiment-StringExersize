#include <stdio.h>

char *strcpy(char *s1, const char *s2)
{
    for (int i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    return s1;
}

int main()
{
    char str1[] = "ibaraki";
    char str2[] = "kosen";
    strcpy(str1, str2);
    printf("str1 : %s", str1);
    return 0;
}