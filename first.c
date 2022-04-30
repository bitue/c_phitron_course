#include<stdio.h>

int main (){

    int t ;
    scanf("%d", &t);
     int co =0  ;
    for (int i=0 ; i<t ; i++){

        int j , k ;
        scanf("%d %d", &j , &k);
        if( k-j  > 1){
            co++;

        }
    }
    printf("%d", co);


}
