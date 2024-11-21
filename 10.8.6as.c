//最小公倍数LCM(m,n) = |m*n| / GCD(m,n)
//两个数的最小公倍数（LCM）可以通过它们的积的绝对值除以它们的最大公约数（GCD）来求得
// Created by 仇皓然 on 24-11-12.
//编写一个求最小公倍数的函数 int MiniumCommonMultipe(int m,int n)

#include <stdio.h>

// 计算最大公约数（GCD）
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

// 计算最小公倍数（LCM）
int MiniumCommonMultipe(int m, int n) {
    return (m * n) / gcd(m, n);  // 使用公式 LCM = (m * n) / GCD(m, n)
}

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    printf("The least common multiple of %d and %d is %d.\n", m, n, MiniumCommonMultipe(m, n));
    return 0;
}