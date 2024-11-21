
// Created by 仇皓然 on 24-11-12.
//逢7必进，从一开始报数，遇到7或着7的倍数或者含7的数字时喊过，下一个从过的数字后接着报数，报错接受惩罚
#include <stdio.h>

// 判断一个数是否包含7或是7的倍数
int isSpecial(int num) {
    // 如果数字是7的倍数或者数字中包含7，返回1
    if (num % 7 == 0) {
        return 1;  // 是7的倍数
    }

    // 检查数字中是否包含7
    while (num > 0) {
        if (num % 10 == 7) {
            return 1;  // 包含7
        }
        num /= 10;  // 去掉最后一位数字
    }

    return 0;  // 既不是7的倍数，也不包含7
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isSpecial(i)) {
            printf("过 ");  // 遇到7或倍数或含7的数字跳过，喊“过”
        } else {
            printf("%d ", i);  // 否则正常报数
        }
    }

    return 0;
}