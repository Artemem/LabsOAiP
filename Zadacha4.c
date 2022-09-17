#include <stdio.h>

int main()
{
    int k;
    printf_s("Seasons of year: Summer(1), Autumn(2), Winter(3), Spring(4)\n");
    printf_s("Input season number:");
    scanf_s("%d", &k);
    switch (k)
    {
    case 1:
        printf("June, July, August");
        break;
    case 2:
        printf("September, October, November");
        break;
    case 3:
        printf("December, Junuary, February");
        break;
    case 4:
        printf("March, April, May");
        break;
    default:
        printf("Wrong number");
    }
    return 0;
}