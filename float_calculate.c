#include <stdio.h>

int main()
{
	float num1, num2;
	int sum = 0, diff = 0;
	printf("Enter two floating numbers: \n");
	scanf("%f %f", &num1, &num2);
	printf("Summation: %d\n", (int) num1 + (int) num2);
	printf("Difference: %.2f", (float) num1 - (float) num2);
}
