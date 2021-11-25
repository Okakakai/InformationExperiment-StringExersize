#include <stdio.h>

int main()
{
    char target[] = "ibaraki";
    int i = 0;

    // for (int i = 0; target[i] != '\0'; i++)
    // {
    //     printf("%c/\n", target[i]);
    // }

    while (target[i] != '\0')
    {
        printf("%c/", target[i]);
        i++;
    }
    puts("");
    return 0;
}
