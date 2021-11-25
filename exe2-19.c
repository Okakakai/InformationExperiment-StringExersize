#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int i = 0;

    while (1)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;
        }
        else if (str[i] == '\0')
        {
            break;
        }
        else
        {
            printf("%c", str[i]);
            i++;
        }
    }
    return 0;
}