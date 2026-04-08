#include <stdio.h>

int main()
{
	int a, b, sum;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("\n");
	
	printf("Enter the value of b: ");
	scanf("%d", &b);
	printf("\n");
	
	sum = a + b;
	printf("The sum of two numbers %d and %d is: %d", a, b, sum);
	
	return 0;
}
