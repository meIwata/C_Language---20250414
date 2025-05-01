#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word[20];
	scanf("%s", &word);
//	int length;
//	length = strlen(word);
	int i ;
	int count = 0;
//	for(i=0; i<length; i++){
	for(i=0; i<strlen(word); i++){	
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
			count++;
		}
	}
		printf("¥À­µ: %d­Ó\n", count);
	
	
	return 0;
}
