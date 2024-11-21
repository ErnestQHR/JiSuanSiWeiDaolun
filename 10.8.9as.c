//判断一个数是否为素数（质数）的基本方法是：
// 从 2 到该数的平方根范围内检查是否存在能整除该数的整数。如果存在这样的数，则说明该数不是素数；
// 如果不存在，则该数是素数
// Created by 仇皓然 on 24-11-12.
//输入一个大于等于2的正整数n，判断这个数是否是一个素数，如果是则输出n是素数，不是就输出n不是素数

#include <stdio.h>
#include <math.h>  // 包含数学库，用于计算平方根

// 判断是否为素数的函数
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // 1 或更小的数不是素数
    }

    // 判断是否能被 2 到 sqrt(n) 的整数整除
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // 如果能被整除，说明不是素数
        }
    }

    return 1;  // 如果没有能整除的数，说明是素数
}

int main() {
    int n;
    printf("请输入一个大于等于2的正整数n: ");
    scanf("%d", &n);

    if (n >= 2) {
        if (isPrime(n)) {
            printf("%d 是素数\n", n);
        } else {
            printf("%d 不是素数\n", n);
        }
    } else {
        printf("输入无效，请输入一个大于等于2的正整数。\n");
    }

    return 0;
}