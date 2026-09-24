#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct List{
    int data;
    struct List *next;
};
struct List *start, *ptr;
int linearSearch( int key ){
    ptr=start;
    int pos=0;
    while(ptr!=NULL){
        pos++;
        if(ptr->data==key){
            printf("\n item found at pos = %d \n", pos);
            return 0;
        }else{
            printf("\n element not found at position %d", pos);

        }
        ptr=ptr->next;
    }
    return 0;
}
int main(){
    int i, key, op;
    while(op!=3){

        printf("\n 1) insertion \n 2) Linear search \n 3) exit \n choose an operation : ");
        scanf("%d", &op);


        switch(op){
        case 1:
            printf("enetr an element to insert : ");
            struct List *temp =(struct List *)malloc(sizeof(struct List));
            scanf("%d", &temp->data);
            temp->next=start;
            start=temp;

            ptr=start;
            while(ptr!=NULL){
                printf("%d --> ", ptr->data);
                ptr=ptr->next;
            }

            break;
        case 2:
            printf("\n enetr the search element :");
            scanf("%d", &key);
            linearSearch(key);
            break;
        case 3:
            printf("\n exiting ....");
            break;
        default:
            printf("\n invalid choice");
            break;
        }

    }

    return 0;
}
