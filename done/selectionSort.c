#include<stdio.h>
#include<stdlib.h>
//int comN=0;
void selectionSort(int n , int *array){

    for(int i=0; i<n; i++){
        for(int j=i; j<n ; j++){
                //comN++;
            if(array[i]>array[j]){
                int temp =array[j];
                array[j]=array[i];
                array[i]=temp;
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

    selectionSort(n , array);


    for(int i=0; i<n;i++){
        printf("%d ,", array[i]);
    }


     //printf("\ncomplexity=%d", comN);

    return 0;
}
