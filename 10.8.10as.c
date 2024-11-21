//
// Created by 仇皓然 on 24-11-12.
//要求输出2到100的所有素数
#include <stdio.h>
#include <math.h>
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

int main(){
  for (int i = 2; i <= 100; i++) {
    if (isPrime(i)) {
      printf("%d ", i);
  }
  }
  return 0;
  }