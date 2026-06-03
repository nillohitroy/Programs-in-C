#include <stdio.h>

int mystrlen(char *str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	return len;
}

void reverse(char * to, char * from) {
	int len = mystrlen(from); int j = 0; int i;
	for (i = len-1;i >=0;i--){
		to[j] = from[i];
		j++;
	}
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
	char a[15], sub1[15], result[15] = {0};
	
	int n1, n2;
	
	printf("Enter first string: \n");
	scanf("%[^\n]", a);
	
	printf("Enter the starting and ending point for String 1: \n");
	scanf("%d %d", &n1, &n2);
	
	substring(a, sub1, n1, n2);
	
	printf("\nSubstring 1: %s\n", sub1);
	
	reverse(result, sub1);
	
	printf("Reversed String: %s\n", result);
	
	return 0;
}

