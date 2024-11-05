//
// Created by 仇皓然 on 24-10-22.
//利用switch语句实现多分支语句

#include <stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    switch(day)
    {
      case 1:
        printf("看课堂ppt");
        break;

      case 2:
        printf("复习课后习题");
        break;

      case 3:
        printf("看教材里面的重点");
        break;

      case 4:
        printf("写代码");
        break;

      case 5:
       printf("问老师");
       break;

       default:
         printf("日期有错");

        }
        return 0;


}
