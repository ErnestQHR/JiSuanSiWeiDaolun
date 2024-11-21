//
// Created by 仇皓然 on 24-11-7.
//输入两个正整数m，n，求其最大公约数和最小公倍数

#include <stdio.h>
int main(){
  int m,n;
  printf("enter two numbers:");
  scanf("%d %d",&m,&n);

  if(m<n){
    int temp=m;
    m=n;
    n=temp;
}
   int max =n;
   while(!0) {
     if(n%max==0&&m%max==0){
       printf("\t最大公约数是%d。\n",max);
       break;
     }
     max--;
   }
   int min=m;
   while(!0){
     if(min%n==0&&min%m==0){
       printf("\t最小公倍数%d。\n",min);
       break;
   }
   min++;
   }
   return 0;
 }
