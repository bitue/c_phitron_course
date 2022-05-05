#include<stdio.h>
#include<math.h>


int main (){

    long long int n ;
    scanf("%lld", &n);
    if(n>=-2147483648 && n <= 2147483647  ) {
        printf("Yes");
    }
    else {
        printf("No");
    }


}
