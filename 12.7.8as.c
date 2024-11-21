//声明并定义sort函数，该函数的功能是将arrayList数组的三个数字
//由小到大顺序排序，并输出。在main函数中编写如下内容：从外部输入三个整数，并将这
//存到一个一维数组中，然后调用sort函数，该函数的功能是将该数组的三个数字由小到大排序，并输出。
// Created by 仇皓然 on 24-11-19.
#include <stdio.h>
void sort(int arr[3]) {
  for(int i=0;i<2;i++){
    for(int j=i+1;j<3;j++){
      if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int i=0;i<3;i++){
    printf("%d\n",arr[i]);
  }
}
int main(){
     int arr[3];
     for(int i=0;i<3;i++){
       scanf("%d",&arr[i]);
}
    sort(arr);

    return 0;
 }
