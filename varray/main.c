#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num []={99,88,77,66,55};
	int i;
	for(i=0;i<5;i++){
		printf("%d\n", num[i]);
	}
	
	float fnum[]={99.9, 88.8, 77.7, 66.6, 55.5};
	for(i=0;i<5;i++) {
		printf("%.1f\n", fnum[i]);
	}
	
	char ch[] = {'a', 'b', 'c', 'd', 'e'};
	for(i=0;i<5;i++){
		printf("%c\n", ch[i]);
	}
	
	char name[]="James";
	for(i=0;i<5;i++){
		printf("%c\n", name[i]);
	}
	
	double dnum[] = {99.5, 88.5, 77.5, 66.5, 55.5};
	for(i=0;i<5;i++){
		printf("%.1f\n", dnum[i]);
	}
	return 0;
}
