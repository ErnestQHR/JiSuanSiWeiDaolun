//
// Created by 仇皓然 on 24-11-12.
//求和：2+4+6+8+·····+50.
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 2; i <= 50; i += 2) {
        sum += i;
    }
    printf("2 + 4 + 6 + ... + 50 的和是: %d\n", sum);
    return 0;
}