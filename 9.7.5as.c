//
// Created by 仇皓然 on 24-10-29.
//编写一个int getday（int m）函数 输入一个月份y，返回这个月有多少天

#include <stdio.h>

int getday(int m) {
  switch(m){
    case 1:case 3:case 5:case 7: case 8: case 10: case 12:
      return 31;
    case 4:case 6:case 9: case 11:
      return 30;
    case 2:
      return 28;
    default:
      return -1;
  }
}
int main(){
    int m;
    printf("Enter month(1-12): ");
    scanf("%d",&m);
    int days = getday(m);
    if(days==-1){
      printf("No days found");
    }
    else{
      printf("Days of the month %d:",days);
    }
return 0;

}


