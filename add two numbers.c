#include<stdio.h>

int main() {
	int num1 = 56;
	int num2 = 28;
	printf("Sum of two numbers: %d\n", num1 + num2);
	printf("Sum of %d and %d numbers: %d\n", num1, num2, (int)(num1 + num2));
	
	float num_1 = 5.35;
	printf("Print the float: %08.2f", num_1);
	return 0;
}
