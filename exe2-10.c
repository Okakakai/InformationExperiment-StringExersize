#include <stdio.h>

int main()
{
    char target[] = "oiibkayrrawkqiykpoasjebn";

    for (int i = 0; target[i] != '\0'; i++)
    {
        if (i % 2 != 0)
        {
            printf("%c", target[i]);
        }
    }
    puts("");

    return 0;
}
