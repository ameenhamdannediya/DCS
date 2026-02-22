#include <stdio.h>
#include <math.h>
int main(){
    int a , b, c;
    float D ,solu1 , solu2 ;
    printf("value of a :" );
    scanf("%d", &a);
    printf("\nvalue of b :" );
    scanf("%d", &b);
    printf("\nvalue of c :" );
    scanf("%d", &c);


    printf("\nequation = %dX^2+%dX+%d ", a, b, c);
    D = (b*b) - (4.0*a*c) ;
    if(D<0){
        printf("no real solution ");

    }else{
        solu1 = (-b+sqrt(D))/2.0*a;
        solu2 = (-b-sqrt(D))/2.0*a;

        printf("\nx = %f", solu1);
        printf("\nx = %f", solu2);
    }




    return 0 ;
}
