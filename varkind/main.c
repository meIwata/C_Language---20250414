#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 5; /*�ŧi��� �ܼ� �a��l��*/ 
	int b; /*�ŧi��� �ܼ�*/
	b = 3; /*����*/ 
	printf("%d\n", a);
	printf("%d\n", b);
	float c = 8.8;
	printf("%f\n", c); /*�p���I��w�d6��*/
	printf("%.2f\n", c); /*�p���I���2��*/ 
	char d = 'W'; /*�r��*/
	printf("%c\n", d); 
	char e[]="James";
	printf("%s\n", e);
	double f = 8.8;
	printf("%.1f\n", f);
	return 0;
}
