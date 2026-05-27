#include <stdio.h>


int main()
{
	void check(int, int, int, int *, int *, int *);  // Prototype declaration
	
	int a, b, c;
	int *x, *y, *z; 
	int res_x, res_y, res_z;
    
	x = &res_x;
	y = &res_y;
	z = &res_z;

	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
    
	c = a + b;
    
	check(a, b, c, x, y, z);
	
	if(*x == 0 && *y == 0 && *z == 0){
		printf("All three are palindromic numbers and they are: %d %d %d\n", a, b, c);
	}
	
	else if(*x == 0 && *y == 0){
		printf("%d and %d are palindromic\n", a, b);
	}
	else if(*y == 0 && *z == 0){
		printf("%d and %d are palindromic\n", b, c);
	}
	else if(*x == 0 && *z == 0){
		printf("%d and %d are palindromic\n", a, c);
	}
	
	else if(*x == 0){
		printf("%d is palindromic\n", a);
	}
	else if(*y == 0){
		printf("%d is palindromic\n", b);
	}
	else if(*z == 0){
		printf("%d is palindromic\n", c);
	}
	else{
		printf("None of the numbers are palindromic\n");
	}
    
	return 0;
}

void check(int a, int b, int c, int *x, int *y, int *z){
	int fn(int);  // Prototype declaration
	
	*x = fn(a);
	*y = fn(b);
	*z = fn(c);
}

int fn(int x){
	int cp = x;
	int dig;
	int rev = 0;
    
	while (cp > 0) { 
		dig = cp % 10;
		rev = rev * 10 + dig;
		cp = cp / 10;
	}
    
	if (rev == x){
		return 0;
	}
	else {
		return 1;
	}
}

