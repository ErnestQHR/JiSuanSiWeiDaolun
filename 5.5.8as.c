//
// Created by 仇皓然 on 24-10-16.
//请写出一个判断一个字符变量c是否为数字字符的表达式
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c >= '0' && c <= '9'){
      printf("%c is number\n", c);
    }
    else {
      printf("%c is not number\n", c);
    }
  return 0;
}