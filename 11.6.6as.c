//
// Created by 仇皓然 on 24-11-19.
//输入一组字符，判断是不是为对称字符，abc非对称，aba对称
#include<stdio.h>
#include<string.h>
int jud(char str[]){
  int len = strlen(str);//获取字符串的长度
  int left = 0, right = len-1;

  while(left < right){
    if(str[left] != str[right]){
      return 0;
    }
    left++;
    right--;
 }
 return 1;
}

int main(){
  char str[100];
  scanf("%s",str);
  if(jud(str)){
    printf("YES");

}else{
  printf("NO");
}
return 0;
}