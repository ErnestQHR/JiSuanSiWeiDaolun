//
// Created by 仇皓然 on 24-11-19.
//定义一个3X4的二维浮点数组，并且求出每一行的平均数，并保留两位有效小数
#include <stdio.h>
int main(){
    float arr[3][4];
    float ave[3];
    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        scanf("%f",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
      float sum=0.0;
      for(int j=0;j<4;j++){
        sum+=arr[i][j];
    }
   ave[i]=sum/4.0;
   }
   for(int i=0;i<3;i++){
     printf("%.2f\n",ave[i]);
   }
   return 0;
   }