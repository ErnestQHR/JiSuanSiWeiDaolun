//
// Created by 仇皓然 on 24-10-16.
//scanf的使用
#include <stdio.h>
int main(){

    char c;
    int a;
    float f;
    scanf("%c",&c);
    scanf("%d",&a);
    scanf("%f",&f);
    printf("%c\t%d\t%0.4f",c,a,f);//%0.1f表示保留一位小数 /t横向跳格
    return 0;
}