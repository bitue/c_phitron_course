#include<stdio.h>

int main (){


    int n ;
    scanf("%d", &n);

    for (int i=1 ; i<=n ; i++){

      if(n==1){
        printf("I hate it ");
        return 0;
      }
      if(i%2 ==0){
        if(i==n){
           printf("I love it ");
        }
        else {
           printf("I love that ");
        }

      }
      if(i%2 ==1){
        if(i==n){
            printf("I hate it ");
        }
        else {
            printf("I hate that ");

        }

      }






    }




}
