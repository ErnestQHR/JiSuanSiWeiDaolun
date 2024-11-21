//
// Created by 仇皓然 on 24-11-7.
//输出1到100以内的所有奇数。要求分别使用whlie，和do while 以及for实现
#include<stdio.h>
int main() {
    int i=1;
    //使用do while语句
    /*do{
      if(i%2!=0){
          printf("%d\n",i);
    }
    i++;}
    while(i<=100);
    return 0;
    }*/
    //使用while语句
    /*while(i<100) {
        if(i%2!=0) {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}*/
    //使用for循环
    for(i=1;i<=100;i++) {
        if (i%2!=0)printf("%d\n",i);
    }
    return 0;
}
