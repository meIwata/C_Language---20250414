#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d", &score[i]);
	}
	for(i=0;i<10;i++){
		printf("%d    ", score[i]);
	}
	
	printf("\n");
	
	int sum=0;
	for(i=0;i<10;i++){
		sum += score[i];
	}
	printf("Á`¤À: %d\n", sum);
	
	float avg = sum/10.0;
	printf("¥­§¡: %.1f\n", avg);
	
	return 0;
}
