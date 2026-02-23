#include<stdio.h>

int main()
{
    int n=2,x,y, array[50][50] ,sum[50][50] ={0} , sub[50][50]={0};
    int i , o, p;
    printf("\n number of rows : ");
    scanf("%d", &x);
    printf("\n number of colomn : ");
    scanf("%d", &y);
        
    for( i=0 ; i<n;i++){
        printf("\n elements : ");
        for( o=0 ;o<x; o++){
            for( p=0; p<y;p++){
            scanf("%d", &array[o][p]);
            sum[o][p]= sum[o][p]+ array[o][p];
            if(i==0){
               sub[o][p]= array[o][p];
               }else {
               sub[o][p]= sub[o][p] - array[o][p];
               }}}
        printf("\n\nMATRIX %d ={ \n\t",i+1);
        for(o=0 ;o<x; o++){
            for( p=0; p<y;p++){
            if(o==x-1&&p==y-1){
                printf("%d }",array[o][p]);
            }else if(p==y-1){
                printf("%d \n", array[o][p]);
            } else {
                printf("%d ,", array[o][p]);
            }}
            printf("\n\t");
        }}
   printf("\n\n sum = {  \n");
   for( o=0 ;o<x; o++){
            for( p=0; p<y;p++){
            if(o==x-1&&p==y-1){
                printf("%d }", sum[o][p]);
            }else if(p==y-1){
                printf("%d \n", sum[o][p]);
            } else {
                printf("%d ,", sum[o][p]);
            }}
            printf("\n");
        }
   printf("\n\n substraction = { \n");
     for(o=0 ;o<x; o++){
            for( p=0; p<y;p++){
            if(o==x-1&&p==y-1){
                printf("%d }", sub[o][p]);
            }else if(p==y-1){
                printf("%d \n", sub[o][p]);
            } else {
                printf("%d ,", sub[o][p]);
            }}
            printf("\n");
        }
        
    return 0;   
   }