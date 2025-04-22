#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	printf("請輸入a: ");
	scanf("%d", &a);
	
	printf("請輸入b: ");
	scanf("%d", &b);
	
	c = sqrt(pow(a,2) + pow(b,2));
	printf("c: %d\n", c);
	return 0;
}
