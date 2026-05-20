#include <stdio.h>

int main() {
    char ch[6];
    int i, k=0, flag=0;
    
	printf("Enter the characters: \n");
	for(i = 0;i < 5;i++){
		scanf("%c", &ch[i]);
		fflush(stdin);
	}
	
	for(i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	printf("\n");
	

	for(i = 4;i >= 0;i--){
		if(ch[i] == ch[k]){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}
		k++;
	}
	if (flag == 1){
		printf("It is palindrome.\n");
	}
	else {
		printf("It is not a palindrome.\n");
	}
	
	k = 0;
	flag = 0; 
	for(i = 4;i >= 0;i--){
		if(ch[i] == ' ' || ch[i] == '\n'){
			continue;
		}
		else{
			if(ch[k] == ' ' || ch[k] == '\n'){
				k++;
			}
			
			if(ch[i] == ch[k]){
				flag = 1;
			}
			
			else{
				flag = 0;
				break;
			}
		}
		k++;
	}
	if (flag == 1){
		printf("It is palindrome.\n");
	}
	else {
		printf("It is not a palindrome.\n");
	}
}

