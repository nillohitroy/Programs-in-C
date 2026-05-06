#include<stdio.h>

int main()
{
	int m, n, i, j;
	printf("Enter the value of m and n: \n");
	scanf("%d %d", &m, &n);
	if (m > 0 && n > 0) {
		for (i = 1;i <= m;i++){
			for (j = 1;j <= n;j++){
				if(i == 1 || i == m || j == 1 || j == n || j == i){
					printf("*\t");
				}
				else
					printf("\t");
			}
			printf("\n");
		}
	}
	else {
		printf("Invalid Input.");
	}
	return 0;
}
