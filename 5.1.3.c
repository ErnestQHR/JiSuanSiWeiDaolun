//变量的交换
// Created by 仇皓然 on 24-10-15.

#include <stdio.h>

int main(){
    int a = 12,b = 13;
    int c = 0;//引入第三个变量c来交换
    c = a;
    a = b;
    b = c;
    printf("a=%d b=%d\n",a,b);  //输出a，b的值
    return 0;
}
