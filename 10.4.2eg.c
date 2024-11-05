//
// Created by 仇皓然 on 24-11-5.
//
#include <stdio.h>

int main(){
    int i;
    for(i=100;i<=200;i++){
      if(i%9==0){
        printf("100到200以内第一个被九整除的数是%d\n",i);
        break;
        }
    }
    return 0;
    }