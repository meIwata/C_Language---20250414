#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(a, b){
	return a + b;
}
int sub(a, b){

	return a - b;
}
int mul(a, b){
	return a * b;
}
int divd(a, b){
	return a / b;
}
int remd(a, b){
	return a % b;
}
int main(int argc, char *argv[]) {
	int a = 5;
	int b = 3;
	int result = add(a, b);
	printf("%d\n", result);
	
	result = sub(a, b);
	printf("%d\n", result);
	
	result = mul(a, b);
	printf("%d\n", result);
	
	result = divd(a, b);
	printf("%d\n", result);
	
	result = remd(a, b);
	printf("%d\n", result);
	return 0;
}
