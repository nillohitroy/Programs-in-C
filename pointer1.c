#include<stdio.h>

int main()
{
	int i, a[10], *p=a, temp;
	
	for(i = 0;i < 10;i++){
		printf("Enter a number: \n");
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(a[i] % 2 != 0){
			temp = a[i];
			a[i] = *p;
			*p = temp;
			p++;
		}
	}
	for(i = 0; i < 10;i++){
		printf("%d ", a[i]);
	}
}
