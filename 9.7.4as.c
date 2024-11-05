//
// Created by 仇皓然 on 24-10-29.
//

#include <stdio.h>
int fun(int x){
  if(x<1){
    return x;
}
else if(x<100 && x>=1){
     return fun(x-10);
 }
 else if(x>=100){
      return fun(x/2+5);
 }
 }

int main() {
  int x;
  scanf("%d",&x);
  printf("%d",fun(x));
  return 0;

}
