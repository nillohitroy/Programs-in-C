#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a vowel: \n");
	scanf("%c", &ch);
	while (1){
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			printf("The vowel is: %c", ch);
			break;
		}
		else{
			printf("Input vowel only!\n");
			scanf("\n%c", &ch);
		}
	}
	return 0;
}
