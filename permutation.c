#include <stdio.h>

int main() {
    int num, d1, d2, d3;

    printf("Enter a 3-digit number: ");
	scanf("%d", &num);
	if (num < 100 || num > 999)
		printf("Invalid Input. Enter a 3 digit number.");
	else
	{
		d1 = num / 100;
	    d2 = (num / 10) % 10;
	    d3 = num % 10;	
	    
	    printf("Permutations:\n");
	
	    int count = 0, i, j, k;
	    for (i = 1; i <= 3; i++) {
	        for (j = 1; j <= 3; j++) {
	            for (k = 1; k <= 3; k++) {
	                if (i != j && j != k && i != k) {
	                    int a, b, c, n;
	
	                    a = (i == 1) ? d1 : (i == 2) ? d2 : d3;
	                    b = (j == 1) ? d1 : (j == 2) ? d2 : d3;
	                    c = (k == 1) ? d1 : (k == 2) ? d2 : d3;
						
						n = a * 100 + b * 10 + c;
	                    count++;
	                    printf("Number %d: %d\n", count, n);
	                }
	            }
	        }
	    }
	
	    printf("Total permutations: %d\n", count);
	}
	return 0;
}
