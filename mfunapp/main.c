#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = -5;
	int result;
	result = fabs(a);
	printf("%d\n", result);
	
	float b = 8.3;
	result = ceil(b);
	printf("%d\n", result);
	
	result = floor(b);
	printf("%d\n", result);
	
	int c = 7;
	int d = 3.5;
	result = pow(c,d);
	printf("%d\n", result);
	
	result = pow(d,c);
	printf("%d\n", result);
	
	int e = 81;
	result = sqrt(e);
	printf("%d\n", result);
	
	int f = 8.1;
	result = round(f);
	printf("%d\n", result);
	
	return 0;
}
