#include <stdio.h>

int main()
{
// For Integers
	int a, b, sum;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("\n");
	
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("\n");
	
	sum = a + b;
	printf("The sum of two numbers %d and %d is: %d\n", a, b, sum);
	
//	For Float
	float num1, num2, sum1;
	printf("Enter the num1 and num2: \n");
	scanf("%f%f", &num1, &num2);
	
	sum1 = num1 + num2;
	printf("The result is: %.3f", sum1);
	
	return 0;
}
