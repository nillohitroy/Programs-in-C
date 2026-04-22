#include <stdio.h>

int main()
{
	int a, b, res;
	char ch;
	printf("Enter two numbers and operator: \n");
	scanf("%d %d %c", &a, &b, &ch);
	
	switch(ch) {
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
	}
	printf("Result : %d\n", res);
	
//	Performing using ternary operator
int result = (ch == '+') ? (a + b) : (ch == '-') ? (a - b) : (ch == '*') ? (a * b) : (ch == '/') ? (a / b) : 0;
printf("The result is %d\n", result);
}
