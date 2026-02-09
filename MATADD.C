#include <stdio.h>
#include <conio.h>

void main (){
    int i , o,p, n, row[10] ,colomn[10] , array[50][50] , sum[50][50] = {0}, sub[50][50];
    clrscr();
    printf("number of mats to add or substract : ");
    scanf("%d",&n);
    printf("\n ");

    for(i=0;i<n ;i++){


	printf("\nnumber of rows : ");
	scanf("%d",&row[i]);
	printf("\nnumber of colomns : ");
	scanf("%d",&colomn[i]);

	printf("elements : ");
	for(o=0 ; o< row[i]; o++){
		for(p=0 ; p<colomn[i] ; p++){
			scanf("%d", &array[o][p]);
			sum[o][p]=sum[o][p]+array[o][p];
			if(i==0){
				sub[o][p]=array[o][p];
			}else{
				sub[o][p]=sub[o][p]-array[o][p];
			}
		}
	}

	printf("MATRIX %d = { \n\t", i+1);
	for(o=0 ; o< row[i]; o++){
		for(p=0 ; p<colomn[i] ; p++){
		if(p==colomn[i]-1){
			printf("%d \n\t", array[o][p]);
		}else if(p==colomn[i]-1&&o==row[i]-1){
			printf("%d }", array[o][p]);
		}else {
			printf("%d ,", array[o][p]);
		}
		}
	}
	}
	i=0;
	printf("SUM = { \n\t");
	for(o=0 ; o< row[i]; o++){
		for(p=0 ; p<colomn[i] ; p++){
		if(p==colomn[i]-1){
			printf("%d \n\t", sum[o][p]);
		}else if(p==colomn[i]-1&&o==row[i]-1){
			printf("%d }", sum[o][p]);
		}else {
			printf("%d ,", sum[o][p]);
		}
		}
	}

	printf("SUB = { \n\t");
	for(o=0 ; o< row[i]; o++){
		for(p=0 ; p<colomn[i] ; p++){
		if(p==colomn[i]-1){
			printf("%d \n\t", sub[o][p]);
		}else if(p==colomn[i]-1&&o==row[i]-1){
			printf("%d }", sub[o][p]);
		}else {
			printf("%d ,", sub[o][p]);
		}
		}
	}











getch();
}
