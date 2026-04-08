#include <stdio.h>
int main()
{
	
//	Using print statements
	printf("Using print statements\n\n");
	printf("*\n*\t*\t\n*\t*\t*\t\n*\t*\t*\t*\t");
	
//	Using for loop
	printf("\n\nUsing for loop\n\n");
	int i, j;
	for(i = 0; i <= 4;i++){
		for(j = 0;j <= i;j++){
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
