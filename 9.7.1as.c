//
// Created by 仇皓然 on 24-10-24.
//输入一个非零整数，判断这个数是正整数还是负整数
#include <stdio.h>
void judge(int a){
     if(a > 0)
       printf("这个数是正数");
     else if(a < 0)
       printf("这个数是负数");
     }
     int main(){
         int a;
         scanf("%d",&a);
         judge(a);
         return 0;
     }
