//
// Created by 仇皓然 on 24-10-22.
//int sum (int a,int b)写出一个函数调用的例子

#include <stdio.h>

int sum (int a,int b){
        return a+b;
}
int main(){
     int a,b;
     scanf("%d %d",&a,&b);
     printf("%d",sum(a,b));
     return 0;
}
