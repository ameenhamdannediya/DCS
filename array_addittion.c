#include <stdio.h>

void main (){

    int n, row[10] ,colomn[10] , array[50][50];
    printf("number of mats to add or substract : ");
    scanf("%d",&n);
    printf("\n ");

    for(int i=0;i<n ;i++){
        printf("MATRIX %d", i+1);

        printf("\n\nnumber of rows : ",);
        scanf("%d",&row[i]);
        printf("\nnumber of colomns : ",);
        scanf("%d",&colomn[i]);

        printf("elements : ");
        for(int o=0 ; o< row[i]; o++){
                for(int p=0 ; p<colomn[i] ; p++){
                        scanf("%d", &array[o][p]);


                }





        }


    }









}
