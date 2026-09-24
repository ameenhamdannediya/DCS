#include <stdio.h>
#include <stdlib.h>
int MergeSort(int *array, int left , int right){
    int mid = left+((right-left)/2);
    if(mid!=left+1){
        MergeSort(array , left , mid);
    }
    if(mid!=right-1){

        MergeSort(array , mid, right);
    }

    printf("%d\n", mid);



}
int main(){
    int n ;
    printf("enetr number of elements : ");
    scanf("%d", &n);
    int *array = malloc(n*sizeof(int));
    printf("enter elements :");
    for(int i=0; i< n; i++){
        scanf("%d", &array[i]);
    }

    MergeSort(array, 0 , n);


    for(int i=0; i< n; i++){
        printf("%d , ", array[i]);
    }




    return 0;
}
