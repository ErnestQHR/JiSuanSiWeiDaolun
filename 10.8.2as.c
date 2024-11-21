//输出26个英文小写字母。要求分别用while和do while 和for循环
// Created by 仇皓然 on 24-11-12.

#include <stdio.h>
//使用for循环
int main(){
  /*char a;
  for(a='a';a<='z';a++){
    printf("%c\t",a);
  }*/
  //使用while
    /*char ch = 'a';
    while (ch <= 'z') {
      printf("%c ", ch);
      ch++;
    }
    */
  //使用do while
    char ch = 'a';
    do {
      printf("%c ", ch);
      ch++;
    } while (ch <= 'z');
    return 0;
  }
