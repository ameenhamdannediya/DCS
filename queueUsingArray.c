
#include <stdio.h>
#include <stdlib.h>

int array[100]={0} , front = -1 , rear = -1 ;

void insert(int value){
    if(rear==99){
        printf("\n queue full");
    }else {
        if(front==-1){
            front++;
        }
        array[++rear]= value;
        printf("\n %d inserted ", array[rear]);
    }
}

void del(){
    if(rear==99){
        printf("\n queue empty");
    }else {
        int x = array[front];
        array[front] = 0 ;
        front++;
        printf("\n %d deltedted ",x );
    }
}
void display(){
    for(int i = front; i<= rear ; i++){
        printf("-> %d ", array[i]);
    }
}

int main(){


    int op, value;


    while(op!=4){
        printf("\n 1) insertion \n 2) deletetion \n 3) display \n 4) exit \n choose an operation : ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nenetr the vlaue to insert : ");
            scanf("%d", &value);
            insert( value);
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
