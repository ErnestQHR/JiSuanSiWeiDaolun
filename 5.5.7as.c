//
// Created by 仇皓然 on 24-10-16.
//请写出判断一个字符变量c是否为英文字符的表达式

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')){
      printf("%c is an english letter",c);
    }else {
      printf("%c is not an english letter",c);
    }
    return 0;
}