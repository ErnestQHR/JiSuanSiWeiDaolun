//
// Created by 仇皓然 on 24-11-19.
//
#include <stdio.h>
#include <string.h>
struct stu {
  char name[12];
  char sex;
  long class;
  int s1;//成绩1
  int s2;//成绩2
 };
 int main() {
   struct stu st1={"li ning",'M',110104,85,80};
   struct stu st2;
   st2 = st1;//结构体变量作为一个整体赋值
   strcpy(st2.name,"hu ming");
   st2.class=110206;
   st2.s1=83;
   printf("name\tsex\tclass\ts1\ts2\n");
   printf("%s\t%c\t%ld\t%d\t%d\n",st2.name,st2.sex,st2.class,st2.s1,st2.s2);
   printf("%s\t%c\t%ld\t%d\t%d\n",st1.name,st1.sex,st1.class,st1.s1,st1.s2);
   return 0;

 }
