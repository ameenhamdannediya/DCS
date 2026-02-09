#include<stdio.h>
#include<conio.h>

void main(){
	int x, y , w , evaluation, z;
	printf("value of x \n");
	scanf("%d", &x);
	printf("value of y \n");
	scanf("%d", &y);
	printf("value of z \n");
	scanf("%d",&z);
	printf("value of w \n");
	scanf("%d", &w);
	evaluation = (((x+y)^2)*(x+z))/w
	printf("evaluation == %d" , evaluation);
}