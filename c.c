#include<stdio.h>

int main (){

    int S , T , X ;
    scanf("%d %d %d", &S , &T, &X);
    while (1){



         if(S==24){
            S =0 ;
        }



        if(S == T){
            break ;
        }


        if(S == X){
            printf("Yes");
            return  0;

        }
           S++ ;

    }
    printf("No");
    return  0;


}
