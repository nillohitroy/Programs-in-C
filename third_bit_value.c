#include <stdio.h>

int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d", &a);
	
	printf("The third bit value: %d", (a & 4) ? 1 : 0);
}
