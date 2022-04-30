#include<stdio.h>

int main (){

    int m , n ;
    int co =1 ;
    scanf("%d %d", &m , &n);
    for ( int i=1 ; i<=m ; i++){
        if(i % 2 ==1  ){
            for(int i=0 ; i<n ; i++){
                printf("#");
            }
        }
        if(i%2 ==0){
            if(co % 2 ==1 ){
                  for(int i =0 ; i<n-1 ;i ++){
                  printf(".");

                  }
                  co++;
                  printf("#");
            }
        else {
              printf("#");
              for(int i =0 ; i<n-1 ;i ++){
                printf(".");

            }
            co++ ;


        }



        }

        printf("\n");

    }


}
