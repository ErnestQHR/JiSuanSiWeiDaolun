//
// Created by 仇皓然 on 24-11-21.
//
#include<stdio.h>
int main(){
  struct student{
    char name[12];
    int score_a;
    int score_b;
    int score_c;
  };
  struct student stu[5];
  int i,sum[5];
  int max,sum_a = 0;

  printf("依此输入：姓名\t语文\t数学\t英语\n");
  for(i=0;i<5;i++){
    scanf("%s%d%d%d",&stu[i].name,&stu[i].score_a,&stu[i].score_b,&stu[i].score_c);
    sum[i]=stu[i].score_a+stu[i].score_b+stu[i].score_c;
  }
    max=stu[0].score_a;
    for(int i=0;i<5;i++){
      sum_a+=stu[i].score_a;
      if(max<stu[i].score_a){
        max=stu[i].score_a;
        }
      }
     printf("姓名\t语文\t数学\t英语\t总成绩\n");
     for(i=0;i<5;i++){
       printf("%s\t%d\t%d\t%d\t%d\n",stu[i].name,stu[i].score_a,stu[i].score_b,stu[i].score_c,sum[i]);
     }
     printf("语文最高分：%d\n",max);
     printf("语文平均分：%.2f\n",(float)(sum_a)/5);
     return 0;
     }

