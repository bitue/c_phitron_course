#include<stdio.h>

int main (){

    int N ,K, A ;
    scanf("%d %d %d", &N , &K , &A);
    int co = A ;
    for(int i = 1 ; i<K ; i++){
        co++ ;
        if(co > N){
            co = 1 ;
        }
    }
    printf("%d", co );



}
