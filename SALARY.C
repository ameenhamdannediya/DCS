#include <stdio.h>
#include <conio.h>

int basic, bonus , comission, salary;
int main(){
	clrscr();
	printf("how much basic pay ? \n");
	scanf("%d",&basic);
	printf("how much bonus ? \n");
	scanf("%d", &bonus);
	printf("how mcuh comission ? \n");
	scanf("%d", &comission);
	salary = basic+bonus+comission;
	printf("\n\n total salary == %d", salary);



	getch();

}