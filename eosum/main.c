#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int sum = 0;
	for(i=1;i<=100;i+=2){
	sum += i;
	}
	printf("奇數和: %d\n", sum);
	
	int j;
	int total = 0;
	for(j=2;j<=100;j+=2){
	total += j;
	}
	printf("偶數和: %d\n", total);
	
	return 0;
}
