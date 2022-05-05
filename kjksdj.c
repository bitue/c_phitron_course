#include<stdio.h>


int main (){

    float n , M ;
    scanf("%d %d", &n , &M);
    int a = M /n ;
    float diff = M/n - a ;


    if(M/n <=6 && (n<=M)){
        printf("Yes");
    }
    else {
        printf("No");
    }



}
