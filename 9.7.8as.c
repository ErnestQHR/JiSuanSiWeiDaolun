//
// Created by 仇皓然 on 24-10-29.
#include<stdio.h>

void judgetime(double time){
  if(time>=7&&time<=11){
    printf("stduy");
}
else if(time>=12&&time<=18){
      printf("execise");
}
else if(time>=19&&time<=22){
      printf("stduy by myself");
}
else if(time>=6&&time<=23){
      printf("sleep");
}
}

int main(){
    double time;
    scanf("%lf",&time);
    judgetime(time);
      return 0;
}
