//
// Created by 仇皓然 on 24-11-19.
//输入10个正整数，并定义一维数组int binary[10],要求按照顺序将这个10个整数对应的二进制存入binary中

#include <stdio.h>

int main() {
    int numbers[10];      // 存储输入的10个正整数
    int binary[10] = {0}; // 存储转换后的二进制数（以整数形式存储）

    // 输入10个正整数
    printf("请输入10个正整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] <= 0) { // 确保输入为正整数
            printf("输入错误，请输入正整数。\n");
            return 1;
        }
    }

    // 转换为二进制并存入 binary 数组
    for (int i = 0; i < 10; i++) {
        int n = numbers[i];
        int binaryValue = 0, place = 1;

        while (n > 0) {
            int remainder = n % 2;
            binaryValue += remainder * place; // 累加当前位的二进制值
            n /= 2;                           // 减去当前位的值
            place *= 10;                      // 移动到下一位
        }
        binary[i] = binaryValue; // 存储二进制值
    }

    // 输出结果
    printf("对应的二进制值为：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d 的二进制为：%d\n", numbers[i], binary[i]);
    }

    return 0;
}