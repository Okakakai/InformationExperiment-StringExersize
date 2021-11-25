#include <stdio.h>

int main()
{
    char target[][100] = {"Hello", "Goodbye", "Thankyou"};
    for (int j = 0; j < 3; j++)
    {
        printf("%s\n", target[j]);
    }
    puts("");

    return 0;
}
