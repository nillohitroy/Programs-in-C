#include <stdio.h>

int mystrlen(char * str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

int palin(char * from) {
	int i; int j = 0; int flag = 0;
	int len = mystrlen(from);
	for (i = len - 1; i >= 0; i--){
		if(from[i] == from[j++]){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
	}
	return flag;
}

void substring(char * from, char * to, int start, int end) {
	int len = mystrlen(from);
	
	if (start < 0) start = len + start;
	if (end < 0) end = len + end;
	
	if (start < 0 || start >= len || end < 0 || end >= len) {
		printf("Error: Index out of length");
		to[0] = '\0';
		return;
	}
	
	int i, j = 0;
	
	if (start <= end) {
		for (i = start; i <= end; i++) {
			to[j] = from[i];
			j++;
		}
	} else {
		for (i = start; i >= end; i--) {
			to[j] = from[i];
			j++;
		}
	}
	
	to[j] = '\0';
}

int main()
{
	char a[15], substr[15] = {0};
		
	printf("Enter string: \n");
	scanf("%[^\n]", a);
	
	int n1, n2;
	printf("Enter the start and end point: \n");
	scanf("%d %d", &n1, &n2);
	
	substring(a, substr, n1, n2);
	
	if(palin(a)) {
		printf("The String %s is palindrome\n", a);
	}
	else{
		printf("The String %s is not palindrome\n", a);
	}
	
	if(palin(substr)) {
		printf("The String %s is palindrome\n", substr);
	}
	
	else{
		printf("The String %s is palindrome\n", substr);
	}
	
	return 0;
}

