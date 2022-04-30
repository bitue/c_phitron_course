#include<stdio.h>

int main (){

    int A, B, C , D , E , F , X ;
    scanf("%d %d %d %d %d %d %d", &A , &B, &C , &D , &E, &F, &X);

    int t_dis =0 ;
    int a_dis =0 ;
    int Xt , Xa =0 ;
    Xt = X ;
    Xa = X ;


     // For taski
     while (1){

        if(Xt > A ){
            t_dis = t_dis + A*B ;
            Xt = Xt - A ;

        }
        else {
            t_dis = t_dis + Xt *B ;
        }
        if(Xt > C){
            Xt = Xt -C ;
        }
        else {
            break;
        }
     }

     // for Akoi
      while (Xa>=0){
        if(Xa > D ){
            a_dis = a_dis + D*E ;
            Xa = Xa - D ;

        }
        else {
            a_dis = a_dis + Xa *E ;
        }
        if(Xa > F){
            Xa = Xa -F ;
        }
        else {
            break;
        }
     }

     if(a_dis > t_dis){
        printf("Aoki");
     }
     else if (a_dis < t_dis){
        printf("Takahashi");
     }
     else {
        printf("Draw");
     }




    return 0;


}
