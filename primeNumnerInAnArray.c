
#include <stdio.h>



int main(){
    int n, i, array[50];
    printf("number of elements :" );
    scanf("%d", & n);

    printf("\nelements : ");
    for(i = 0 ; i < n ; i++){
        scanf("%d", &array[i]);

    }
    //printf("\n\nprime number  ");
    for(i = 0 ; i < n ; i++){
          if(array[i] <= 1){
                printf("%d is not prime\n", array[i]) ;
          }else {
            int isPrime = 1 ;
            for(int j = 2 ; j*j <= array[i]; j++){
                if(array[i]%j == 0){
                    isPrime =0;

                }

            }
            if(isPrime == 1){
                printf("%d is prime\n", array[i]) ;

            }else if(isPrime = 0){
                printf("%d is not prime\n", array[i]) ;
            }
          }

    }


    return 0 ;
}
