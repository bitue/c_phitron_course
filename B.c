#include<stdio.h>

int main (){

    int A , B ;
    scanf("%d %d", &A, &B);

    if(2*B >=A){
        printf("%d", 0);
    }
    else {
        printf("%d", A-2*B);
    }


}
