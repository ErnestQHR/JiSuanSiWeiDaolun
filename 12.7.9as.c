//
// Created by 仇皓然 on 24-11-19.
//编写一个函数，求一个字符串的长度。要求在main函数中输入字符串，然后通过控制台输出其长度
#include <stdio.h>

int stringlen(const char *str){
     int len = 0;
     while(str[len] != '\0'){
       len++;
     }
     return len;
     }
     int main(){
       char str[100];
       scanf("%s", str);
       int len = stringlen(str);
       printf("%d", len);
       return 0;

     }