#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score=38;
	scanf("%d",& score);
	if(score>=80)
	{
		printf("��{�u��\n");
	}
	else if(score>=60)
	{
		printf("�ή�\n");
	}
	else
	{
		printf("���ή�\n");
	}
	return 0;
}
