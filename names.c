#include <stdio.h>

int main()
{
	char names[10][15];
	int i, j;
	
	printf("Enter the names: \n");
	for (i = 0; i < 10;i++) {
		scanf("%s", names[i]);
	}
	
	printf("The names in reverse order: \n");
	for (i = 9;i >= 0;i--) {
		printf("%s\n", names[i]);
	}
}
