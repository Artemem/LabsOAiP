#include <stdio.h>
int main()
{
	int k;
	printf_s("Input number:");
	scanf_s("%d", &k);
	if (k % 2 == 1)
		printf_s("%d is odd", k);
	else
		printf_s("%d is even", k);
	return 0;
}