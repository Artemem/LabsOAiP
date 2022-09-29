#include <stdio.h>
int pair(float a, float b);
int main()
{
    float a, b, c;
    int sum;
    printf("input three numbers a, b, c: ");
    scanf_s("%f %f %f", &a, &b, &c);
    sum = pair(a, b) + pair(a, c) + pair(b, c);
    printf("result = %d\n", sum);
    return 0;
}

int pair(float a, float b)
{
    if (a * b == 1)
        return 1;
    else
        return 0;
}
