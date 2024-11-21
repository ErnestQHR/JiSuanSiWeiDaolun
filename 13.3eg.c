//
// Created by 仇皓然 on 24-11-21.
//
#include<stdio.h>
int main(){
    struct worker
    {
    char name[100];
    int age;
    float salary;
};
     struct worker sl={"xiaoming",25,5555.55};
     printf("worker结构体变量的大小：%dB\n",sizeof(sl));
     return 0;
     }