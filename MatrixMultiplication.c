#include <stdio.h>

int main(){
    int m , n, p , q, i,j, k , mat1[50][50] , mat2[50][50], pro[50][50]={0};

    printf("1ST MATRIX \n");
    printf("number of rows : ");
    scanf("%d", &m);
    printf("\nnumber of colomns : ");
    scanf("%d", &n);
    printf("\nelements : ");
    for(i =0 ; i< m ; i++){
            for(j = 0; j< n ; j++){
                scanf("%d" , &mat1[i][j]);
            }

    }


    printf("2ND MATRIX \n");
    printf("number of rows : ");
    scanf("%d", &p);
    printf("\nnumber of colomns : ");
    scanf("%d", &q);
    printf("\nelements : ");
    for(i =0 ; i< p ; i++){
            for(j = 0; j< q ; j++){
                scanf("%d" , &mat2[i][j]);
            }

    }

    if(n != p){
        printf("cant mutiply ");


    }else {

    for(i=0 ; i< m; i++){
            for(j = 0 ; j< q ; j++){
                for(k= 0 ; k<n ;k++){
                    pro[i][j] += mat1[i][k] * mat2[k][j];

                }
            }

    }
    printf("product = {\n\t");
    for(i = 0 ;i<m ;i++){
        for(j=0;j<q ;j++){
                if( j == q-1 && i == m-1){
                    printf("%d }" , pro[i][j]);
                }else if(j == q-1){
                    printf("%d \n\t" , pro[i][j]);
                }else {
                    printf("%d ," , pro[i][j]);
                }


        }
    }

    }



    return 0;
}
