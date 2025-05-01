#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char str[] = "happy";
	char str[50];
	scanf("%s", &str);
	int length;
	length = strlen(str);
	printf("%d\n", length);
	
	int i;
	for(i = 0; i < length; i++){
		printf("%c\n", str[i]);
	}
	return 0;
}
