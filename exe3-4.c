#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ibaraki";
    char str2[] = "kosen";
    strncpy(str1, str2, strlen(str1));
    printf("str1 : %s", str1);
    return 0;
}