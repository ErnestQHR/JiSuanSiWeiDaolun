//
// Created by 仇皓然 on 24-10-29.
//任意输出四个整数，输出这四个数中的最大数和最小数
#include <stdio.h>
void maxmin(int a,int b,int c,int d){
     int max = a;
     int min = a;
     if(b>max) max = b;
     if(c>max) max = c;
     if(d>max) max = d;
     if(b<min) min = b;
     if(c<min) min = c;
     if(d<min) min = d;
     printf("%d %d\n",max,min);
}
int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  maxmin(a,b,c,d);
  return 0;
}
