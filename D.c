#include<stdio.h>

int main (){

  int l ;
  scanf("%d", &l);
  char play [1000005];
  scanf("%s", play);
  int Danik =0 ;
  int  Anton =0 ;
  int i=0 ;
  while (play[i] !='\0'){
    if(play[i]=='A'){
        Anton ++ ;
    }
    else {
        Danik ++;
    }
    i++;

  }

  if(Anton > Danik){
    printf("Anton");
  }
  else if(Anton == Danik){
    printf("Friendship");
  }
  else {
    printf("Danik");
  }

   return 0 ;


}
