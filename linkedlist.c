#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(){
    int value = 50;
    struct node *start , *ptr;
    struct node *temp1=(struct node *)malloc(sizeof(struct node));
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    struct node *temp3=(struct node *)malloc(sizeof(struct node));
    struct node *temp4=(struct node *)malloc(sizeof(struct node));

    temp1->data = 40;
    temp1->next =temp2;
    //start=temp1;

    temp2->data =50;
    temp2->next =temp3;
    //start=temp2;

    temp3->data = 60;
    temp3->next= NULL;
    start=temp1;

    temp4->data = 45;
    temp4->next= NULL;


    ptr=start;
    printf("\ntraversing \n");
    while(ptr!=NULL){
        printf("--> %d ,", ptr->data);
        ptr=ptr->next;
    }

   ptr=start;
   while(ptr->data!=value){
    ptr=ptr->next;
   }
   temp4->next=ptr->next;
   ptr->next=temp4;




     ptr=start;
    printf("\ntraversing \n");
    while(ptr!=NULL){
        printf("--> %d ,", ptr->data);
        ptr=ptr->next;
    }

    return 0;
}
