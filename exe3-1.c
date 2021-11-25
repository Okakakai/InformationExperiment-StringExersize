#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "konichiwa";
    size_t len;

    len = strlen(str);
    printf("length : %d", len);
    return 0;
}