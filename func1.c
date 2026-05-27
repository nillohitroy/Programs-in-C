#include <stdio.h>

int main()
{
	void change(char *);
	char ch[10];
	printf("Enter 10 characters: \n");
	int i; char *p;
	for(i = 0;i < 10; i++){
		fflush(stdin);
		scanf("%c", &ch[i]);
	}
	p = ch;
	change(p);
	
	printf("\nModified array: ");
	for(i = 0; i < 10; i++){
		printf("%c ", ch[i]);
	}
	printf("\n");
}

void change(char *p) {
	int left = 0;
	int i;
	char temp;
	
	for(i = 0; i < 10; i++) {
		if(*(p + i) == 'a' || *(p + i) == 'e' || *(p + i) == 'i' || *(p + i) == 'o' || *(p + i) == 'u' ||
		   *(p + i) == 'A' || *(p + i) == 'E' || *(p + i) == 'I' || *(p + i) == 'O' || *(p + i) == 'U') {
			
			temp = *(p + i);
			*(p + i) = *(p + left);
			*(p + left) = temp;
			
			left++;
		}
	}	
}
