
// Created by 仇皓然 on 24-10-31.
#include <stdio.h>
int main(){
    int i = 1,n;
    int sn = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    do{
      sn = sn*i;
      i++;
    }while(i<=n);
    printf("%d",sn);
    return 0;
}