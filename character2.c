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
		if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
			printf("%c is a vowel\n", ch);
		else
			printf("%c is a consonant\n", ch);
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
			switch((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 5 : 6){
				case 5:
					printf("%c is a vowel\n", ch);
					break;
				case 6:
					printf("%c is a consonant\n", ch);
					break;
			}
			break;
		case 2:
			printf("%c is a digit", ch);
			break;
		case 3:
			printf("%c is a special character");
			break;
	}
}
