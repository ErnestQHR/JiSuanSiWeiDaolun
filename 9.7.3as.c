//
// Created by 仇皓然 on 24-10-24.
//输入任意一个字符，判断该字符并完成字符转换，如果是大写字母，输出其对应的小写形式，如果是小写字母，输出
//其对应的大写格式，如果都不是输出！

#include <stdio.h>
void fun(char a){
  if(a >= 'A' && a <= 'Z')
    a += 32;
  else if( a < 'a' && a > 122)
    a -= 32;
  else printf("!");
}
int main(){
  char a;
  scanf("%c", &a);
  fun(a);
  return 0;
}

