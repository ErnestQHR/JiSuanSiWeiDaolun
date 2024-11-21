//
// Created by 仇皓然 on 24-11-21.
//
#include <stdio.h>
struct staff{
  char *name;
  int salary;
  int per;
};
struct staff staff[3]={"李丽",3000,400,"张芳",5000,550,"赵强",3000,480};

void fun(struct staff staffs[],int len){
  struct staff temp = {"",0,0};
  for(int i=0;i<3;i++){
    if((staffs[i].salary+staffs[i].per)>(temp.salary)+(temp.per)){
      temp.salary=staffs[i].salary;
      temp.per=staffs[i].per;
      temp.name=staffs[i].name;
     }
    }
    printf("%s",temp.name);
    }
    int main(){
      fun(staff,3);
      return 0;
    }


