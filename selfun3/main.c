#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

calArea(int length, int width){
	return length * width;
}
calCircum(int length, int width){
	return 2*(length + width);
}
int main(int argc, char *argv[]) {
	int length;
	scanf("%d", &length);
	int width;
	scanf("%d", &width);
	
	int area = calArea(length, width);
	printf("­±¿n: %d\n", area);
	
	int circum = calCircum(length, width);
	printf("©Pªø: %d\n", circum);
	
	return 0;
}
