#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a digit: \n");
	scanf("%c", &ch);
	
	int res = ch - '0'; // '5' has ascii character 53 and and '0' has 48 so the difference is 5
	printf("The digit given as character %c is converted to an integer %d\n", ch, res);
	return 0;
}
