//输出1到100的所有的偶数
// Created by 仇皓然 on 24-11-5.
//
#include <stdio.h>
int main(){

  int i;
    //第一种方法
  /*for(i=2;i<=100;i+=2){
    printf("%d\t",i);//每次加二保证每次输出都是
   printf("\n");
  }*/
  //第二种方法，输出能被2整除的
    /*for(i=1;i<=100;i++) {
      if (i%2==0) {
        printf("%d\n",i);
      }*/

  for(i=1;i<=50;i++) {
    printf("%d\t",i*2);
  }
  return 0;
  }