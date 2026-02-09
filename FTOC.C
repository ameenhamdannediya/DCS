#include <stdio.h>
#include <conio.h>
int main(){
	float f , c ;
	clrscr();
	printf("value of f : ");
	scanf("%f", &f);
	c = ( f - 32.0 ) * ( 5.0 / 9.0) ;
	printf("\n %ff in c = %fc",f,c);
	getch();
	return 0;

}