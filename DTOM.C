#include <stdio.h>
#include <conio.h>
int main(){
	int D ,R;
	float M;
	clrscr();

	printf("type number of days : ");
	scanf("%d", &D);
	M = D/30.0;
	R = D%30;
	printf("\n %d days are equal to %.3f months", D ,M);
	printf("\n or %.0f months and %d days ", M, R);

	getch();

	return 0;
}