#include <stdio.h>
#include <conio.h>
int a , b, x=0 , CT=0 , y=0;

int sum(int a){
	printf("+\n");
	printf("\n a number to add ");
	scanf("%d", &x);
	return (a + x);
}
int substract(int a){
	printf("-\n");
	printf("\n a number to substract ");
	scanf("%d", &x);
	return a + x;
}
int multiply(int a){
	printf("*\n");
	printf("\n a number to multiply with ");
	scanf("%d", &x);
	return a + x;
}
int divide(int a){
	printf("/\n");
	printf("\n a number to divide with ");
	scanf("%d", &x);
	return a + x;

}
int Woperation(){
	printf("what operation to do \n 1=+ 2=- 3=* 4=/ 5='=' \n entre appropriate number");
	scanf("%d", &b);
	return b;
}

void printCT(int CT){
	printf("curent total === %d", CT);

}
void main(){
	clrscr();
	printf("a number plz");
	scanf("%d" ,&a);
	int wop = Woperation();
	//printf("%d", CT);


	if (wop = 1){
		int sum = sum(a);
		int y = CT + sum ;
		printf("%d",CT);
		//printf("y=%d", y);
		//printCT(CT);
	}/*else if (wop = 2){
		int CT = CT + substract(a);
		printCT(CT);
	}
	else if (wop = 3){
		int CT = CT + multiply(a);
		printCT(CT);
	}
	else if (wop = 4){
		int CT = CT = divide(a);
		printCT(CT);
	}
	else if (wop = 5){
		calculate()
	}else {
		printf("entre a number from the choice");

	}  */

	getch();
}