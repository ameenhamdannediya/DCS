
#include <stdio.h>
#include <stdlib.h>

int array[100];
int top = -1 ;

void push(int value){
    if(top==99){
        printf("\n stack overflow");
    }else {
        array[++top]= value;
        printf("\n %d pushed ", array[top]);
    }
}

int pop(){
    if(top==-1){
        printf("\n stack underflow");
    }else {

        return array[top--];
    }
}

int peek(){
    if(top==-1){
        printf("\n stack underflow");
    }else {

        return array[top];
    }
}


int main(){


    int op, value;


    while(op!=4){
        printf("\n 1) push \n 2) pop \n 3) peek \n 4) exit \n choose an operation : ");
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
            printf("\nexiting .....");
            break;
        default:
            printf("\n invalid choice");
            break;
        }

    }


    return 0;
}
