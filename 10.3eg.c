//
// Created by 仇皓然 on 24-10-31.
//
#include <stdio.h>
#define salary 0.5
int main(){
    float total = 20;
    int month;

    for (month = 1; total < 45; month++){
      total = total + salary;
      printf("一共攒了%d个月，累计总存款%.2f万元.\n",month,total);
}
printf("终于买房了");
return 0;
}