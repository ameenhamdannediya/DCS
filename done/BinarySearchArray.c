
#include<stdio.h>
#include<math.h>

int isSorted(){
    int p=0 , q=0 ;
    for(i =0;i<n-1;i++){
        if(array[i]<=array[i+1]){
            p++;
        }else if(array[i]>=array[i+1]){
            q++;
        }


    }
    if(p==n-1){
        return 1;
    }else if(q==n-1){
        return 2;
    }
    return 0;
}
void displayArray(){
    for(i =0;i<n;i++){
        printf(" %d ,", array[i]);
    }
}
int sort(){
    int x, j ;
    for(i =0;i<n;i++){
            for(j =0;j<n;j++){
                if(array[i]<array[j]){
                    x = array[i];
                    array[i]= array[j];
                    array[j] = x;
        }}
    }

    return 0;
}
int BiSearch(float y){
    //printf("\n%f", y);
    int x = floor(y);
    //printf("\n int %d", x);
    if(key<array[x]){
            //printf("\nless than ");
            BiSearch(x-(x/2));

    }else if(key>array[x] && x<=n){

        //printf("\ngreater than  ");
        BiSearch(x+(x/2));


    }else if(key==array[x]){
        //printf("\n found! ");
        return x;


    }else{
        printf("\ncant find %d in the array \n", key);
        return -2;
    }
}
int BinarySearch(){
    //printf("%d", isSorted());

    if(isSorted()==1){
        printf("\nalready sorted \n");
        displayArray();
    //}else if(isSorted()==0 || isSorted()==2){
    }else {
        printf("\nsorting .... \n");
        sort();
        printf("\nsorting completed \n");
        displayArray();
    }

    float x = floor(n/2);
    //printf("\n%f", x);
    int y = BiSearch(x);
    printf("\n %d is %dth element in the array ",key ,  y+1);


    return 0;
}
int main(){
    int *array[100], n , i, key, op ;

    printf("\n 1) enter elements  \n 2) 1 to n elements  \n choose :");
    scanf("%d", &op);
    printf("\n enter the number of elements (ceiling 100) : ");
    scanf("%d", &n);
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
        case 3:
            printf("\n exiting ...");
            break;
        default:
            printf("\n invalid choice ");
            break;
    }

while(op!=3){


    printf("\n 1) binary search \n 2) exit \n choose :");
    scanf("%d", &op);
    switch(op){
        case 1:

            printf("\n enter a value to search: ");
            scanf("%d", &key);
            printf("\nsearching .... ");
            BinarySearch();
            break;


        case 2:
            printf("\n exiting ...");
            break;

        default:
            printf("\n invalid choice ");
            break;
    }}


    return 0;
}
