//
// Created by 仇皓然 on 24-11-19.
//用指针来实现，a复制给b
#include <stdio.h>
#include <stdlib.h>

int main() {
   char a[]="hello world",b[20];
   char *p1=a;
   char *p2=b;
   for(;*p1!='\0';p1++,p2++){
       *p2=*p1;
   }
   *p2='\0';
   printf("%s",b);
   return 0;
   }