//
// Created by 仇皓然 on 24-10-17.
//简易计算器的实现
#include <stdio.h>
float calculate(float num1, float num2, char ope);//计算器函数的申明
float add(float num1, float num2);//加法函数
float sub(float num1, float num2);//减法函数
float mul(float num1, float num2);//乘法函数
float div(float num1, float num2);//除法函数

int main(void){
     float num1, num2;
     float result = 0.0;
     char ope;
     printf("********欢迎使用计算机********");

     printf("请输入操作数1:\n");
     scanf("%f", &num1);
     printf("请输入操作符号2:\n（提醒只能输入+，-，*，/）");
     getchar();
     scanf("%c", &ope);
     printf("请输入操作数2:\n");
     scanf("%f", &num2);
     result = calculate(num1, num2, ope);
     printf("%f %c %f = %f\n", num1, ope, num2, result);
     printf("--------计算结束——————————");
     return 0;
}

float calculate(float num1, float num2, char ope) {
     float result = 0.0;
     result = add(num1, num2);
     return result;
}
float add(float num1, float num2) {
     return num1 + num2;
}
float sub(float num1, float num2) {
     return num1 - num2;
}
float mul(float num1, float num2) {
     return num1 * num2;
}
float div(float num1, float num2) {
     return num1 / num2;
}

