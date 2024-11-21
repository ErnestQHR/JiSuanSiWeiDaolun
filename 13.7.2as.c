//
// Created by 仇皓然 on 24-11-21.
//定义一个结构体，储存学生的学号，姓名，成绩，求出成绩最高的学生的信息

#include <stdio.h>

// 定义学生结构体
typedef struct {
    int id;          // 学号
    char name[50];   // 姓名
    float score;     // 成绩
} Student;

int main() {
    // 定义学生数组
    Student students[] = {
        {1001, "Alice", 89.5},
        {1002, "Bob", 76.0},
        {1003, "Catherine", 95.0},
        {1004, "David", 88.0}
    };

    // 获取数组长度
    int numStudents = sizeof(students) / sizeof(students[0]);

    // 初始化最高分和对应学生下标
    float maxScore = students[0].score;
    int maxIndex = 0;

    // 遍历数组，寻找最高分
    for (int i = 1; i < numStudents; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            maxIndex = i;
        }
    }

    // 输出最高分学生的信息
    printf("成绩最高的学生信息:\n");
    printf("学号: %d\n", students[maxIndex].id);
    printf("姓名: %s\n", students[maxIndex].name);
    printf("成绩: %.2f\n", students[maxIndex].score);

    return 0;
}