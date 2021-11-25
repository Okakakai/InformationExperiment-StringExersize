#include <stdio.h>

int main()
{
    char target[] = "ibaraki";

    for (int i = 0; target[i] != '\0'; i++)
    {
        printf("%c/", target[i]);
    }
    puts("");

    return 0;
}
