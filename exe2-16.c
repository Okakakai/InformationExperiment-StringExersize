#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;
    scanf("%s", str);
    int i = 0;

    while (1)
    {
        if (str[i] == 'b')
        {
            count++;
        }
        else if (str[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (count == 0)
    {
        printf("Not included");
    }
    else
    {
        printf("included : %ds", count);
    }

    return 0;
}
