#include <stdio.h>
int main()
{
    char str[80];
    int i, j;
    char str_temp[80];
    fgets(str, 80, stdin);

    // for (i = 0; str[i] != '\0'; i++)
    // {
    // }
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    for (j = 0, i -= 1; i >= 0; i--, j++)
    {
        str_temp[j] = str[i - 1];
    }

    printf("%s\n", str_temp);
    return 0;
}