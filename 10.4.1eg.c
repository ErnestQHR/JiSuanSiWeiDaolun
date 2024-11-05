//
// Created by 仇皓然 on 24-10-31.
//
#include <stdio.h>
int main(){
    int year=1;
    while(!0){
      printf("第%d年向小美求婚\n",year);
      if(year==4)
        {
        printf("小美答应了！\n");
        break;
        }
    printf("\t小美没答应，明年继续。");
    year++;
}
return 0;
}