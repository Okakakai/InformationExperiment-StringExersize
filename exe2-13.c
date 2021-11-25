#include <stdio.h>

int main()
{
    char target[3][100];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", target[i]);
    }
    printf("\n\ndisplaying....\n");
    for (int j = 0; j < 3; j++)
    {
        printf("%s\n", target[j]);
    }
    puts("");

    return 0;
}
