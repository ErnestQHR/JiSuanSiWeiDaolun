//
// Created by 仇皓然 on 24-10-17.
//模拟用户在某系统注册个人信息，现在需要输入用户名，要求用户名只能由字母组成，且用户名长度为五且用户名需要依次
//输入用户名的每个字母。输入后系统再次显示用户名进行确认

#include <stdio.h>
int main(){
    char c1,c2,c3,c4,c5;
    printf("请依次输入你的用户名字的字母");
    c1 = getchar();
    getchar();
    c2 = getchar();
    getchar();
    c3 = getchar();
    getchar();
    c4 = getchar();
    getchar();
    c5 = getchar();
    getchar();
    printf("您的用户名为%c%c%c%c%c",c1,c2,c3,c4,c5);
    return 0;
}
