//编写一个int getChar（char str[]
//要求遍历字符数组str，统计字符串的英文字母的个数并返回结果
// Created by 仇皓然 on 24-11-19.
//
#include <stdio.h>
#include <ctype.h>
int getChar(char str[]){
  int count = 0;
  for(int i = 0; str[i] != '\0'; i++){
    if(isalpha(str[i])){
      count++;
    }
  }
  return count;
}
int main(){
  char str[100];

  fgets(str, 100, stdin);
  int res = getChar(str);
  printf("%d", res);
  return 0;
  }