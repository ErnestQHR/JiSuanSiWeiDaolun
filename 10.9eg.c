//
// Created by 仇皓然 on 24-11-7.
//输出200到300内的所有素数，要求每行输出8个素数，并统计出素数的总共个数

#include <stdio.h>

int main(){
    int count_in_line = 0;
    for (int num =200;num<300;num++){
      int flag,i;
      flag =1;
      for (i=2;i<num;i++){
        if (num%i==0){
          flag=0;
          break;
        }
      }
      if (flag){
        count_in_line++;
        printf("%d\t",num);
        if (count_in_line%8==0){
          printf("\n");
          }
      }

 }
 return 0;
 }