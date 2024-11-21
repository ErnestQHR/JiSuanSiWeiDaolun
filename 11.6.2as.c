#include <stdio.h>

int main() {
    int numbers[10];      // 用于存储输入的 10 个整数
    int max, min;         // 用于存储最大值和最小值

    // 输入 10 个整数
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // 初始化最大值和最小值为数组的第一个元素
    max = min = numbers[0];

    // 遍历数组，找出最大值和最小值
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // 输出结果
    printf("最大值为：%d\n", max);
    printf("最小值为：%d\n", min);

    return 0;
}