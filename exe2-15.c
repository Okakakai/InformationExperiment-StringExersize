#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int i = 0;

    while (1)
    {
        if (str[i] == 'a')
        {
            printf("a : %d th", i + 1);
            return 0;
        }
        i++;
    }

    return 0;
}
