//使用辗转相除法又叫欧几里得算法
//欧几里得算法的核心思想是：
//用较大数 a 除以较小数 b，得到余数 r。
//将 b 替换为 a，将余数 r 替换为 b，继续这个过程直到余数为 0。
//当余数为 0 时，最后一次非零的 b 就是 a 和 b 的最大公约数。
// Created by 仇皓然 on 24-11-12.
//编写一个求最大公约数函数int GreatestCommonDivisor（int m，int n），要求传入两个正整数，返回最大公约数
#include <stdio.h>

int GreatestCommonDivisor(int m,int n){
  if(m>n) {
    int t =m;
    m = n;
    n = t;
  }
  while(n!=0){
    int temp=n;
    n=m%n;
    m=temp;
  }
return m;
}
int main(){
  int m,n;
  scanf("%d%d",&m,&n);
  printf("%d\n",GreatestCommonDivisor(m,n));
  return 0;
}