#include <stdio.h>

int main(){
    int i,j,m , n ,mat[50][50], trans[50][50];

    printf("number of rows : ");
    scanf("%d", &m);
    printf("\nnumber of colomns : ");
    scanf("%d", &n);
    printf("\nelements : ");
    for(i =0 ; i< m ; i++){
            for(j = 0; j< n ; j++){
                scanf("%d" , &mat[i][j]);
            }

    }
     printf("\n\n matrix = { \n\t");
    for(i =0 ; i< m ; i++){
            for(j = 0; j< n ; j++){

                trans[j][i] = mat[i][j];


                if( j == n-1 && i == m-1){
                    printf("%d }" , mat[i][j]);
                }else if(j == n-1){
                    printf("%d \n\t" , mat[i][j]);
                }else {
                    printf("%d ," , mat[i][j]);
                }


            }

    }





    printf("\n\n transpose = { \n\t");
    for(i =0 ; i< n ; i++){
            for(j = 0; j< m ; j++){



                if( j == m-1 && i == n-1){
                    printf("%d }" , trans[i][j]);
                }else if(j == m-1){
                    printf("%d \n\t" , trans[i][j]);
                }else {
                    printf("%d ," , trans[i][j]);
                }


            }

    }





    return 0 ;

}
