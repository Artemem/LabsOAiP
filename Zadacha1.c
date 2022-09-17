#include <stdio.h>

int main()
{
	int	R;
	double V, S;
	printf_s("Input radius of ball:");
	scanf_s("%d", &R);
	V = (4 * 3.14 * R * R * R)/3;
	S = 4 * R * R * 3.14;
	printf_s("Volume of ball is %1.3f\n", V);
	printf_s("The surface area of ball is %1.3f", S);
	return(0);
}