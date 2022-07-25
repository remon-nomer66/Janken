#include <stdio.h>
#define N_STUDENT 5

int main()
{
  int     math[N_STUDENT] = { 90, 85, 60, 70, 100 };  // 点数
  int     sum=0;     // 点数の合計
  double  mean=0.0;  // 点数の平均
  int i,j,a;
  int total=0, ave=0;

  printf("数学の成績\n");

  printf("出席番号　点数\n");

  for(i=0; i<5; i++){
    printf("%7d %7d", i+1, math[i]);
    a = math[i]/10;
    for(j=0; j<a; j++){
      printf("*");
    }
    printf("\n");
  }

  for(i=0; i<5; i++){
    total += math[i];
  }
  ave = total / N_STUDENT;
  printf("平均点=%d\n",ave);
  
  return 0;
}