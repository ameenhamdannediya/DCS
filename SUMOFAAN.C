
#include<conio.h>
#include<stdio.h>
void main (){
	clrscr();
	int a,b,sum;
	printf("\na number =", a);
	scanf("%d", &a);
	printf("\nanother number to sum =", b);
	scanf("%d", &b);
	sum = a+b;
	printf("\nsum of given numbers =%d", sum);
	getch();
}