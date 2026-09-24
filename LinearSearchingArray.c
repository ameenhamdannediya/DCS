#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int linearSearch(int *array, int n, int key ){
    for(int i=0; i<n ; i++){
        if(array[i]==key){
            printf("\n %d == %d", array[i], key);
            printf("\n %d is %dth element", key , i+1);
            return i;
        }else{
            printf("\n %d =\\= %d", array[i], key);
        }
    }
    printf("\ncant find %d in the array \n", key);
    return 0;
}

int main(){

    int  n , i, key, op ;
    printf("\n 1) enter elements  \n 2) 1 to n elements  \n choose :");
    scanf("%d", &op);
    printf("\n enter the number of elements  : ");
    scanf("%d", &n);
    int *array = malloc(n*sizeof(int));
    switch(op){
        case 1:
            printf("\n enter elements  : ");
            for(i=0; i<n ; i++){
                scanf("%d", &array[i]);
            }
            break;
        case 2 :
            for(i=0; i<n ; i++){
                array[i]= i+1;
            }
            break;
        default:
            printf("\n invalid choice ");
            break;
    }

    printf("\n enter a value to search: ");
    scanf("%d", &key);

    printf("\nsearching .... ");
    linearSearch(array , n, key);

    return 0;
}
