//
// Created by 仇皓然 on 24-11-19.
//#
#include <stdio.h>

int main() {
    char a[] = "i love china";  // 字符数组 a
    char b[20];                 // 字符数组 b，足够大来存储 "i love china" 和 '\0'
    int i;

    // 将字符串 a 中的字符复制到 b 中
    for(i = 0; a[i] != '\0'; i++) {
        b[i] = a[i];
    }

    // 添加字符串结束符 '\0' 到 b 数组末尾
    b[i] = '\0';

    // 输出数组 b 中的字符串
    printf("%s", b);

    return 0;
}
