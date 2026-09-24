#include <stdio.h>
#include <stdlib.h>
struct node {
int data ;
struct node *next, *prev;

 };
int main()
{

    int value=0, i=0 , op, n, inrt;
    struct node *start , *ptr, *prePtr ;
    struct node *temp[50];
    for(i=1;i<50;i++){
        temp[i]=(struct node *)malloc(sizeof(struct node ));

    }
    i=4;

    temp[1]->data = 20;
    temp[1]->next = temp[2];

    temp[2]->data = 30;
    temp[2]->next = temp[3];

    temp[3]->data = 40;
    temp[3]->next = NULL;

    start = temp[1];
    ptr=start;
    printf("\n linked list \n");
    while(ptr!=NULL){
        printf("--> %d ,", ptr->data);
        ptr=ptr->next;
    }
    while(op!=3){

    printf("\n 1) insertion \n 2) deletion \n 3) exit \n choose an operation : ");
    scanf("%d",&op);
    switch (op){
        case 1 :
            printf("\nenter a data to insert : ");
            scanf("%d", &n);

            printf("\n 1) at biginning \n 2) at middle \n 3) at end \n choose : ");
            scanf("%d", &inrt);
            switch(inrt){
            case 1:
                ptr=start;
                temp[i]->data=n;
                temp[i]->next=ptr;
                start=temp[i];
                break;
            case 2:
                printf("\nenter the value (insert after , position) : ");
                scanf("%d", &value);
                ptr=start;
                while(ptr->data!=value){
                    ptr=ptr->next;
                }
                temp[i]->data = n;
                temp[i]->next=ptr->next;
                ptr->next=temp[i];
                break;
            case 3:
                ptr=start;
                temp[i]->data=n;
                while(ptr->next!=NULL){
                    ptr=ptr->next;
                }
                ptr->next=temp[i];
                temp[i]->next =NULL;

                break;
            default:
                printf("invalid choi9ce");
                break;
            }

            i++;

            break;

        case 2:
            printf("\nenter the value to delete : ");
            scanf("%d", &value);

            ptr=start;
            if(start->data==value){
                start=ptr->next;
                ptr->next=NULL;
            }else{
                while(ptr->data!=value){
                    prePtr=ptr;
                    ptr=ptr->next;

                }
                prePtr->next=ptr->next;
            }



            free(ptr);




            break;
        case 3:
            printf("\n exiting... \n ");
            break;
        default :
            printf("\ninvalid choice\n");
            break;
        }

        ptr=start;
        printf("\n linked list \n");
        while(ptr!=NULL){
            printf("--> %d ,", ptr->data);
            ptr=ptr->next;
        }
    }



    return 0;
}

