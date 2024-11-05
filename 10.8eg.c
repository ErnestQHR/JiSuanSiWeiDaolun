//
// Created by 仇皓然 on 24-11-7.
//从外部输入一个正整数，然后判断这个数是不是素数

#include <stdio.h>

void func(){
    int num, flag = 1, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
        return;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
}

int main(){
    func();
    return 0;
}