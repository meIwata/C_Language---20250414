#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	srand(time(NULL));
	num=rand()%100+1;
	printf("%d\n", num);
	num=rand()%100+1;
	printf("%d\n", num);
	return 0;
}
