//用%S格式符，意思是输出字符串
// Created by 仇皓然 on 24-11-14.
#include <stdio.h>
int main(){
  char c[]={"china"}; //长度为6，因为还有结束符号\0
  printf("%s\n",c);
  int length = sizeof(c) / sizeof(char);//获取数组长度
  printf("%d",length);
  return 0;


}
