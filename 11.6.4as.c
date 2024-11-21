//
// Created by 仇皓然 on 24-11-19.
//编写一个int getCapitalNum()函数，要求在该函数输入任意一组字符，并统计返回该组字符中的大写字母的个数
#include <stdio.h>

int getCapitalNums() {
    char input[100]; // 存储用户输入
    int count = 0;   // 统计大写字母的计数器

    // 提示用户输入字符串
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // 读取用户输入

    // 遍历字符串，统计大写字母
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            count++;
        }
    }

    return count; // 返回统计结果
}

int main() {
    int capitalNums = getCapitalNums(); // 调用函数
    printf("The number of capital letters is %d\n", capitalNums); // 输出结果
    return 0;
}