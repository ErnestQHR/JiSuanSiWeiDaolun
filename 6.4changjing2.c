//
// Created by 仇皓然 on 24-10-17.
//模拟登陆某网站的行为，要求客户输出用户名和密码，登陆后网站显示欢迎信息。假设用户名为M,密码为123
#include<stdio.h>
int main(){
     char username;
     int  password;
     printf("Enter your username:");
     scanf("%c",&username);
     printf("Enter your password:");
     scanf("%d",&password);
     printf("欢迎用户%c登陆",username);
     return 0;

}
