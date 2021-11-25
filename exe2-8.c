#include <stdio.h>
#include <string.h>

int main()
{
    char target[] = "ibaraki";

    for (int i = 0; target[i] != '\0'; i++)
    {
        printf("%c/\n", target[i]);
    }

    return 0;
}
