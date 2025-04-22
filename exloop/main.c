#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=1;i<=10;i++){
		
		if(i==8){
			break;
		}
		printf("%d  ",i);
		
	}
	printf("\n");
	int j;
	for(j=1;j<=10;j++){
		
		if(j==8){
			continue;
		}
		printf("%d  ",j);
		
	}
	return 0;
}
