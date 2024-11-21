//
// Created by 仇皓然 on 24-11-19.
//定义一个5X5的二维整数数组，并且求出每一列的平均数，平均数保留两位小数


#include <stdio.h>

int main() {
    int arr[5][5]; // 定义 5x5 的二维整数数组
    float ave[5];  // 存储每一列的平均数（浮点类型）

    // 输入二维数组的元素
    printf("请输入 5x5 的二维整数数组元素：\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 计算每一列的平均数
    for (int j = 0; j < 5; j++) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += arr[i][j]; // 对每一列的元素求和
        }
        ave[j] = sum / 5.0; // 计算平均数，保留两位小数
    }

    // 输出每一列的平均数
    printf("每一列的平均数为：\n");
    for (int j = 0; j < 5; j++) {
        printf("第 %d 列的平均数: %.2f\n", j + 1, ave[j]); // 保留两位小数
    }

    return 0;
}