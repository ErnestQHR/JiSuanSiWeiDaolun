//
// Created by 仇皓然 on 24-11-14.
//
#include <stdio.h>
float calculate(int score[],int len){
  int i,sum=0;
  float avg=0;
  for(i=0;i<len;i++){
    sum+=score[i];
    }
    avg=sum/len;
    return avg;
}
    int main()
{
      int score[5]={78,68,72,98,76};
      int len=sizeof(score)/sizeof(score[0]);
      float avg=calculate(score,len);
      printf("%.2f",avg);
      return 0;
 }
