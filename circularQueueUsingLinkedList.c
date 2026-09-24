
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL , *rear=NULL;

void insert(int value, int n){
   struct node *temp=(struct node *)malloc(sizeof(struct node));
   temp->data = value;
   temp->next=NULL;
    if (front == NULL) {
        front = rear = temp;
    } else {
        rear->next = temp;
        rear = temp;
    }

   printf("\n %d inserted ", rear->data);

}

void del(){
    struct node *temp = front;
    if (front == NULL) {
        printf("Queue Empty");
        return;
    }

    int x= temp->data;
    front = front->next;
    free(temp);

    printf("\n %d deleted", x);

}
void display(){
    struct node *temp = front;
    while(temp!= NULL){
            printf("--> %d ", temp->data);
            temp=temp->next;

    }
    if(temp==NULL){
            printf("\n queue empty");
            return;
    }



}

int main(){


    int op=0,n,  value;
    printf("\n enetr size of queue : ");
    scanf("%d", &n);


    while(op!=4){
        printf("\n 1) insertion \n 2) deletetion \n 3) display \n 4) exit \n choose an operation : ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nenetr the vlaue to insert : ");
            scanf("%d", &value);
            insert(value, n);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;

        case 4:
            printf("\nexiting .....");
            break;
        default:
            printf("\n invalid choice");
            break;
        }

    }


    return 0;
}
