#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	scanf("%d",& score);
	printf("您的分數=%d\n",score);
	if(score>100||score<0){
		printf("輸入錯誤\n");
	}
	else if(score>=80)
	{
		if(score>=90){
			printf("A");
		}else{
			printf("B");
		}
	}else if(score>=60){
		if(score>=70){
			printf("C");
		}else{
			printf("D");
		}
	}
	else {
		if(score>=50){
			printf("E");
		}else{
			printf("F");
		}
	
	}
	return 0;
}
