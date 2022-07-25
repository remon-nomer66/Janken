#include<stdio.h>
int main()
{
  int hand;

  printf("手を選んでください。[0:グー,1:チョキ,2:パー]\n");
  scanf("%d", &hand );

  switch(hand){
    case 0: 
      printf("グーを選びました。\n"); 
      break;
    case 1: 
      printf("チョキを選びました。\n"); 
      break;
    case 2: 
      printf("パーを選びました。\n"); 
      break;
    default: 
      printf("0,1,2のどれかを入力してください。\n");
  }

  return 0;
}