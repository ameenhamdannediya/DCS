#include <stdio.h>


int main(){
    int array[50];
    int n, op, i, value , pos;
    printf("\n enter number of elements (ceiling 50) : ");
    scanf("%d", &n);
    printf("\n enter elements :");

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("\n array = ");
    for(i=0; i<n; i++){
        printf("%d ,", array[i]);
    }
    while(op!=3){
        printf("\n 1) insertion \n 2) deletion \n 3) exit \n choose an operation :");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\n enter the value to insert and position (eg: 20 3 , 20 at 3rd position ) : ");
                scanf("%d %d", &value , &pos);
                n++;
                i=n ;
                while(i>=pos-1){
                    array[i+1] = array[i];
                    i-- ;
                }

                array[pos-1]= value;
                break;
            case 2:

                printf("\n enter the position of element to delete : ");
                scanf("%d", &pos );
                for(i=pos-1; i<n ; i++){

                array[i]= array[i+1];

                }
                n--;

                break;
            case 3:
                printf("\n exiting .....");
                break;
            default:
                printf("\n invalid choice ");
                break;
        }


        printf("\n array = ");
        for(i=0; i<n; i++){
            printf("%d ,", array[i]);
        }
    }


    return 0;
}
