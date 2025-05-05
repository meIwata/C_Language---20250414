#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[20];
	char str2[20];
	
	scanf("%s", &str1);
	scanf("%s", &str2);
	
	printf("str1= %s\n", str1);
	printf("str2= %s\n", str2);
	
	if(strcmp(str1, str2)==0){
	printf("str1, str2 相同\n");
	} else{
		printf("str1, str2 不相同\n");
	}
	return 0;
}
