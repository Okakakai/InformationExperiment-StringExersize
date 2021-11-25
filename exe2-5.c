#include <stdio.h>
#include <string.h>

int main()
{
    char target[1];

    scanf("%s", target);

    if (strcmp("A", target) == 0 || strcmp("B", target) == 0 || strcmp("C", target) == 0)
    {
        puts("正解です");
    }
    else
    {
        puts("誤りです");
    }

    return 0;
}
