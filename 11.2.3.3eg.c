
// Created by 仇皓然 on 24-11-14.
//
#include <stdio.h>
#include<string.h>

int main(){
  char name1[]={"abc"};
  char name2[]={"ABC"};
  printf("%d\n",strcmp(name1,name2));//用ASCII码进行比较
  return 0;

}