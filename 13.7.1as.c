//
// Created by 仇皓然 on 24-11-21.
//定义一个结构体，储存学生的名字，性别，年龄，求出性别为女的学生的姓名和年龄
#include <stdio.h>
#include <string.h>

// 定义学生结构体
typedef struct {
    char name[50];
    char gender[10];
    int age;
} Student;

int main() {
    // 定义学生数组
    Student students[] = {
        {"Alice", "女", 20},
        {"Bob", "男", 22},
        {"Catherine", "女", 19},
        {"David", "男", 21}
    };

    // 获取数组长度
    int numStudents = sizeof(students) / sizeof(students[0]);

    printf("性别为女的学生姓名和年龄:\n");
    // 遍历学生数组
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].gender, "女") == 0) {
            printf("姓名: %s, 年龄: %d\n", students[i].name, students[i].age);
        }
    }

    return 0;
}