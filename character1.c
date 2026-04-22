#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: \n");
	scanf("%c", &ch);
	
//	If Else
	if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		printf("%c is an alphabet\n", ch);
	}
	else if((ch >= '0' && ch <= '9'))
	{
		printf("%c is a digit\n", ch);
	}
	else
		printf("%c is a special character\n");
		
// Switch case
	switch((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? 1 : (ch >= '0' && ch <= '9') ? 2 : 3)
	{
		case 1:
			printf("%c is an alphabet\n", ch);
			break;
		case 2:
			printf("%c is a digit\n", ch);
			break;
		case 3:
			printf("%c is a special character\n");
			break;
	}
}
