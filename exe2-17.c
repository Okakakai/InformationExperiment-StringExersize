#include <stdio.h>

int main()
{
    char str[100], target;
    int count = 0;
    scanf("%s", str);
    fflush(stdin);
    scanf("%c", &target);
    int i = 0;

    while (1)
    {
        if (str[i] == target)
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
