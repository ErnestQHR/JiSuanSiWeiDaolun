//
// Created by 仇皓然 on 24-10-17.
//定义一个双精度浮点类型pi，scanf给pi赋值为3.1415925，赋值后输出pi的值，要求保留两位小数。

#include <stdio.h>

int main() {
    double pi = 0.000000;
    scanf("%lf", &pi);
    printf("pi = %.2lf\n", pi);
    return 0;
}
