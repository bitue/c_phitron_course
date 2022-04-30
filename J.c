#include<stdio.h>


int main (){

    int n ;
    scanf("%d", &n);

    int a , b , c =0 ;
    int co =0 ;
    for (int i=0 ; i<3 ; i++){
        if(i==0){
            a = n% 10 ;
            co = co + a*1 + a*10 + a*100;
            n= n/10 ;
        }
        else if (i ==1){
            b = n% 10 ;
             co = co + b*1 + b*10 + b*100;
            n = n/10 ;
        }
        else if (i==2){
            c = n % 10 ;
             co = co + c*1 + c*10 + c*100;
            n = n/10 ;
        }
    }

    printf("%d", co);


}
