//
// Created by 仇皓然 on 24-11-12.
//编写程序，计算鸡兔同笼的正确答案，40个头100只脚求鸡多少只，兔子多少只

#include <stdio.h>

int main() {
    int x, y;

    // 通过代数计算，代入第一个方程来解第二个方程
    for (y = 0; y <= 40; y++) {
        x = 40 - y;  // 根据第一个方程 x + y = 40
        if (2 * x + 4 * y == 100) {  // 检查第二个方程 2x + 4y = 100
            printf("鸡的数量是: %d\n", x);
            printf("兔子的数量是: %d\n", y);
            break;  // 找到解就退出
        }
    }

    return 0;
}