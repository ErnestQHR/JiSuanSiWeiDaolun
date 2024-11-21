//
// Created by 仇皓然 on 24-11-21.
//定义一个结构体，储存日期的年月日，求出该日期的最后一天的日期
#include <stdio.h>

// 定义日期结构体
typedef struct {
    int year;  // 年
    int month; // 月
    int day;   // 日
} Date;

// 判断闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取月份的天数
int getDaysInMonth(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // 无效的月份
    }
}

int main() {
    // 定义一个日期
    Date date;

    // 输入年、月、日
    printf("请输入日期 (格式: 年 月 日): ");
    scanf("%d %d %d", &date.year, &date.month, &date.day);

    // 获取当前月份的最后一天
    int lastDay = getDaysInMonth(date.year, date.month);

    // 输出结果
    printf("该日期所在月份的最后一天是: %d-%02d-%02d\n", date.year, date.month, lastDay);

    return 0;
}