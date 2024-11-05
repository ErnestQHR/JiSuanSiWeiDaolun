//
// Created by 仇皓然 on 24-10-22.
//要求从键盘上输入两个整数a与b，求a的b次方，要求用一个函数实现

#include <stdio.h>
#include <math.h>

double func(double a,int b){
      return pow(a, b);
}

int main(){
    double a,b;
    printf("Please enter the first number: ");
    scanf("%lf",&a);
    printf("please enter the second number: ");
    scanf("%lf",&b);
    printf("The result is: %lf\n",func(a,b));

    return 0;
}
