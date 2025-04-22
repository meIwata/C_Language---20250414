#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score=38;
	scanf("%d",& score);
	if(score>=80)
	{
		printf("表現優異\n");
	}
	else if(score>=60)
	{
		printf("及格\n");
	}
	else
	{
		printf("不及格\n");
	}
	return 0;
}
