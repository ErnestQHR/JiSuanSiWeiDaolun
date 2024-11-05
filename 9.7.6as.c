//
// Created by 仇皓然 on 24-10-29.
//
#include <stdio.h>

void getday(int m){
      if(m % 4 == 0 && m % 100 != 0 ||m % 400 == 0){
        printf("%d is a leap year", m);
      }
      else{
        printf("%d is not a leap year", m);
      }
}
int main(){
  int m;
  scanf("%d",&m);
  getday(m);
  return 0;
}