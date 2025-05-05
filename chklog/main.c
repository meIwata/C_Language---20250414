#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char acct[20]="abc";
	char pwd[20]="123";
	char acct1[20];
	char pwd1[20];
	scanf("%s", acct1);
	scanf("%s", pwd1);
	
	if(strcmp(acct, acct1)==0 && strcmp(pwd, pwd1)==0){
		printf("歡迎登入本系統!\n");
	} else{
		printf("請先註冊\n");
	}
	
	return 0;
}
