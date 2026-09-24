//using array
#include <stdio.h>
#include <stdlib.h>
#define M 5
int array[M]={0}, front=-1 , rear=-1 ;


void push( int value){

      if(front==-1){
          front++;
      }
      // front or rear % max size give the index that goes to 0 after maxsize ,
      //and if frontIn === rearIn AND also rear not equal to -1 , cause at -1 at the 1st push front = -1 and rear will be 1 so that calls a full even thos its not full
      // OR if rearIN === maxsize -1 AND frontIN = 0 , cause in the 1st condition it would be full , cause rearIN+1 will be maxsize+1 but it should be 0 after maxsize ,
      //so wen rear is maxsize-1 (start at 0 so -1) and frontIN is 0 it is full.
      if( (front%M == (rear%M)+1 && rear!= -1) || (rear%M==M-1 && front%M == 0 ) ){
          printf("\n queue full");
      }else {

          printf("%d c", rear);
          rear=(rear+1)%M;
          printf("%d", rear);
          array[rear]=value;
      }

  printf("\n %d pushed", array[rear]);
}
int pop(){
    //if element at fronIN AND rearIN is both 0 it is considered empty
    if( array[front%M] == 0 && array[rear%M]== 0 ){
        printf("\n queue empty");
        return 0 ;
    }else{
        printf("%d a %d", array[front%M] , array[rear%M]);
        int x = array[front];
        array[front] = 0;
        front= (front+1)%M;
        return x ;
    }
}
int peek(){
    //if element at fronIN AND rearIN is both 0 it is considered empty
   if( array[front%M] == 0 && array[rear%M]== 0 ){
        printf("\n queue empty");
        return 0 ;
    }else{

        return array[front] ;
    }
}
void traverse(){
    int i=0;
    while(i != M){
        printf(" %d , " , array[i]);
        i++;
    }
}
int main()
{
int op, n;

while(op!=5){
printf("\n 1) push \n 2) pop \n 3) peek \n 4) traverse \n 5) exit \n choose an operation :");
scanf("%d", &op);

switch(op){
    case 1:
        printf("\n enter a value to push : ");
        scanf("%d", &n);
        push(n);
        break;

    case 2:
        printf("\n %d poped",pop());
        break;
    case 3:
        printf("\n current value at top = %d ", peek());
        break;
    case 4:
        traverse();
        break;
    case 5:
        printf("\nexiting ....");
        break;
    default :
        printf("\n invalid choice");
        break;
    }
}


    return 0;
}
