#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int total=0;
	for(i=1;i<=100;i++){
		total+=i;
	}
	printf("%d\n",total);
	return 0;
}
