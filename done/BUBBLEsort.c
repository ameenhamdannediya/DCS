#include <stdio.h>
#include <stdlib.h>
//int comN=0;
void bubleSort(int n , int *array ){

    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
                //comN++;
            if(array[j]>array[j+1]){
                int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }

        }

    }

}
int main(){
    int n;
    printf("enetr number of elements :");
    scanf("%d", &n);


    int *array = malloc(n*sizeof(int));

    printf("enetr elements :");
    for(int i=0; i<n;i++){
        scanf("%d", &array[i]);
    }

    bubleSort(n , array);


    for(int i=0; i<n;i++){
        printf("%d ,", array[i]);
    }

   // printf("\ncomplexity=%d", comN);

}
