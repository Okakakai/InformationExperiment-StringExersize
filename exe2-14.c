#include <stdio.h>

int main()
{
    char WeekOfDay[7][100] = {"Monday",
                              "Tuesday",
                              "Wednesday",
                              "Thursday",
                              "Friday",
                              "Saturday",
                              "Sunday"};
    printf("Please enter a number from 0-6\n");
    printf("0-月曜日 1-火曜日 2-水曜日 3-木曜日 4-金曜日 5-土曜日 6-日曜日\n");
    fflush(stdout);

    int select = 0;

    fflush(stdin);
    scanf("%d", &select);
    printf("%s", WeekOfDay[select]);

    return 0;
}
