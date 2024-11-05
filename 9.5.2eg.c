//
// Created by 仇皓然 on 24-10-24.
//
#include <stdio.h>

void grade(int a){
     switch(a){
       case 1:
         printf("100");
         break;
       case 2:
         printf("500");
         break;
       case 3:
         printf("1000");
         break;
       case 4:
         printf("2000");
         break;
         default:
           printf("error");
     }
     }

     int main(){
       int a;
       scanf("%d",&a);
       grade(a);
       return 0;


}