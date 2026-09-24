#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = top;
    top = temp;
    printf("\n%d pushed ", top->data);

}



int pop(){
    struct node *temp = top;

    if(top==NULL){
        printf("stack underflow");
        return -1;

    }else {

        int x = temp->data;
        top=top->next;
        free(temp);
        return x ;

    }

}

int peek(){
     if(top==NULL){
        printf("stack underflow");
        return -1;

    }else {

        return top->data ;

    }

}
void display(){
    if(top==NULL){
        printf("stack underflow");
        return -1;

    }else {

        struct node *temp = top;
        while(temp!=NULL){
            printf("--> %d ", temp->data);
            temp=temp->next;


        }}
}

int main(){


    int op, value;


    while(op!=5){
        printf("\n 1) push \n 2) pop \n 3) peek \n 4) display \n 5) exit \n choose an operation : ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nenetr the vlaue to push : ");
            scanf("%d", &value);
            push( value);
            break;
        case 2:
            printf("\n%d poped from stack ", pop());
            break;
        case 3:
            printf("\ncurrent value at to = %d ", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nexiting .....");
            break;
        default:
            printf("\n invalid choice");
            break;
        }

    }


    return 0;
}
