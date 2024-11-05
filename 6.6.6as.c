//
// Created by 仇皓然 on 24-10-17.
//要求定义一个字符型变量sex模拟生活的中的性别，m是男性，f是女性
//通过getchar（）函数给该变量进行赋值，赋值后通过putchar（）函数输出sex的值

#include <stdio.h>
int main(){
     char sex;
     printf("请输入你的性别");
     sex = getchar();
     printf("性别是：");
     putchar(sex);
     printf("\n");

     return 0;
}
