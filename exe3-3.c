#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ibaraki";
    char str2[] = "kosen";
    strcpy(str1, str2);
    printf("str1 : %s", str1);
    return 0;
}