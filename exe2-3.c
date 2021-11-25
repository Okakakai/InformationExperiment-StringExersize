#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str;
    str = (char *)malloc(sizeof(char) * 128);
    if (str == NULL)
        exit(1);

    scanf("%s", str);
    printf("%s", str);
    return 0;
}