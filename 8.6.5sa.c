//
// Created by 仇皓然 on 24-10-22.
//从键盘中输入三个整数，然后计算这两个数的平均值，用一个函数实现

#include <stdio.h>

double average(double a,double b,double c){
        return (a+b+c)/3.0;
}
int main(){
     double a,b,c;
     scanf("%lf %lf %lf",&a,&b,&c);
     printf("%.2lf\n",average(a,b,c));
     return 0;
}


