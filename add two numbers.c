#include<stdio.h>

int main() {
	int num1 = 56;
	int num2 = 28;
	printf("Sum of two numbers: %d\n", num1 + num2);
	printf("Sum of %d and %d numbers: %d\n", num1, num2, (int)(num1 + num2));
	return 0;
}
