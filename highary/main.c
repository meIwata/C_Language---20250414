#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int high[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &high[i]);
	}
	
	int qualified=0;
	int unqualified=0;
	for(i=0;i<10;i++){
		if(high[i]>=175 && high[i]<=180){
			qualified ++;
		} else{
			unqualified ++;
		}		
	}
	printf("Qualified: %d\n", qualified);
	printf("Unqualified: %d\n", unqualified);
	printf("Total: %d\n", qualified + unqualified);
	return 0;
}
