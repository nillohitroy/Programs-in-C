#include <stdio.h>

int main()
{
	int a, b, x, y;
	printf("Enter four numbers: \n");
	scanf("%d %d %d %d", &a, &b, &x, &y);
	
//	If A is the maximum
	if(a > b && a > x && a > y)
	{
		if(b > x && b > y){
			if (x > y){
				printf("The highest value is %d and lowest value is %d", a, y);
			}
			else
				printf("The highest value is %d and lowest value is %d", a, x);
		}
		else if(x > b && x > y){
			if(b > y){
				printf("The highest value is %d and lowest value is %d", a, y);
			}
			else{
				printf("The highest value is %d and lowest value is %d", a, b);
			}
		}
		else if(y > b && y > x){
			if(x > b)
				printf("The highest value is %d and lowest value is %d", a, b);
			else
				printf("The highest value is %d and lowest value is %d", a, x);
		}
	}
	
//	If b is maximum
	if(b > a && b > x && b > y)
	{
		if(a > x && a > y){
			if (x > y){
				printf("The highest value is %d and lowest value is %d", b, y);
			}
			else
				printf("The highest value is %d and lowest value is %d", b, x);
		}
		else if(x > a && x > y){
			if(a > y){
				printf("The highest value is %d and lowest value is %d", b, y);
			}
			else{
				printf("The highest value is %d and lowest value is %d", b, a);
			}
		}
		else if(y > a && y > x){
			if(x > a)
				printf("The highest value is %d and lowest value is %d", b, a);
			else
				printf("The highest value is %d and lowest value is %d", b, x);
		}
	}
	
//	If x is maximum
	if(x > b && x > a && x > y)
	{
		if(b > a && b > y){
			if (b > y){
				printf("The highest value is %d and lowest value is %d", x, y);
			}
			else
				printf("The highest value is %d and lowest value is %d", x, b);
		}
		else if(y > b && y > a){
			if(b > a){
				printf("The highest value is %d and lowest value is %d", x, a);
			}
			else{
				printf("The highest value is %d and lowest value is %d", x, b);
			}
		}
		else if(a > b && a > y){
			if(y > b)
				printf("The highest value is %d and lowest value is %d", x, b);
			else
				printf("The highest value is %d and lowest value is %d", x, y);
		}
	}
	
//	If y is maximum

	if(y > b && y > x && y > a)
	{
		if(b > x && b > a){
			if (x > a){
				printf("The highest value is %d and lowest value is %d", y, a);
			}
			else
				printf("The highest value is %d and lowest value is %d", y, x);
		}
		else if(a > b && a > x){
			if(b > x){
				printf("The highest value is %d and lowest value is %d", y, x);
			}
			else{
				printf("The highest value is %d and lowest value is %d", y, b);
			}
		}
		else if(b > a && b > x){
			if(x > a)
				printf("The highest value is %d and lowest value is %d", y, a);
			else
				printf("The highest value is %d and lowest value is %d", y, x);
		}
	}
	
//	Using ternary operator
	int max = (a > b && a > x && a > y) ? a : (b > x && b > y) ? b : (x > y) ? x : y;
	int min = (a < b && a < y && a < y) ? a : (b < y && b < x) ? b : (x < y) ? x : y;
	printf("\nThe maximum is %d and minimum is %d", max, min);
}
