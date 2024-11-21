//输入任意一个五位的正整数，然后将该数的每一个数拆分，逆序存入数组nums中
// Created by 仇皓然 on 24-11-19.

#include <stdio.h>
int main() {
     int number;
     int nums[5];
     int i =0;
     scanf("%d",&number);
     while (number > 0) {
          nums[i++] = number % 10;//%10获取最后一位存入数组
          number /= 10;// /10去掉最后一位
     }
     for (int j = 0; j < i; j++) {
          printf("%d ", nums[i]);
     }
     printf("\n");

     return 0;
}

}