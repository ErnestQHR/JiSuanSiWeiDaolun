//编写一个函数int getSum（int n），要求传入不大于10的参数n，返回计算结果
//y = 0！+1！+2！+3！+4！+····+n！
// Created by 仇皓然 on 24-11-12.
//是两个函数，一个用来计算每个数的阶乘然后一个用来求和
#include <stdio.h>

// 计算阶乘的辅助函数
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

// 计算从 0! 到 n! 的阶乘和
int getSum(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += factorial(i);  // 累加每个阶乘的值
    }
    return sum;
}

int main() {
    int n;
    printf("请输入一个不大于10的整数n: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 10) {
        printf("从 0! 到 %d! 的阶乘和是: %d\n", n, getSum(n));
    } else {
        printf("输入无效，n应当是一个不大于10的整数。\n");
    }

    return 0;
}