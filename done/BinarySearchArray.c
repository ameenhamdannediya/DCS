#include<stdio.h>
#include<math.h>

int array[100], n, i, key;

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

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(array[i]<array[j]){
                x = array[i];
                array[i]= array[j];
                array[j] = x;
            }
        }
    }

    return 0;
}

int BiSearch(float y){
    int x = floor(y);

    if(x < 0 || x >= n){
        printf("\ncant find %d in the array \n", key);
        return -2;
    }

    if(key < array[x]){
        if(x == 0){
            printf("\ncant find %d in the array \n", key);
            return -2;
        }

        return BiSearch(x - ((x + 1) / 2));

    }else if(key > array[x]){

        if(x == n-1){
            printf("\ncant find %d in the array \n", key);
            return -2;
        }

        return BiSearch(x + ((n - x) / 2));

    }else if(key == array[x]){
        return x;

    }else{
        printf("\ncant find %d in the array \n", key);
        return -2;
    }
}

int BinarySearch(){

    if(isSorted()==1){
        printf("\nalready sorted \n");
        displayArray();

    }else {
        printf("\nsorting .... \n");
        sort();
        printf("\nsorting completed \n");
        displayArray();
    }

    float x = floor(n/2);

    int y = BiSearch(x);

    if(y != -2){
        printf("\n %d is %dth element in the array ",key , y+1);
    }

    return 0;
}

int main(){

    int op ;

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

    while(op!=2){

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
        }
    }

    return 0;
}
