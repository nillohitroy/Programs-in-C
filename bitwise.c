#include <stdio.h>

int main()
{
	unsigned int a, b;
	printf("Enter two numbers: \n");
	scanf("%u %u", &a, &b);
	printf("Bitwise Left Shift: %u\n", a << 2); // Performs Left shift on a
	printf("Bitwise Right Shift :%u\n", b >> 2);  // Performs Right shift on b
	printf("Bitwise AND: %u\n", a & b);  // Performs the Bitwise AND using a and b as operands
	printf("Bitwise OR: %u\n", a | b);  // Performs the Bitwise OR using a and b as operands
	printf("Bitwise XOR: %u\n", a ^ b); // Performs the Bitwise XOR using a and b as operands
	printf("Bitwise 2's Complement: %d\n", ~a);  // Performs the Bitwise 2's Complement on b
	
	return 0;
}
