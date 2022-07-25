#include<stdio.h>
int keyInput();
int gcd(int n1, int n2);

int main()
{
  int a, b, c;

  printf("2つの自然数の最大公約数を計算する\n");

  a = keyInput();
  b = keyInput();
  c = gcd(a,b);
  //入力値aとb、計算結果cを画面表示する

  return 0;
}

int keyInput(){
  int a;
  scanf("%d\n",&a);//キーボード入力用の変数を宣言する
  printf("入力:%d\n",a);
  return a;
}

int gcd(int n1, int n2){
    int tmp,n3;
    if(n1<n2){
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    n3 = n1 % n2;
    
    while(n3!=0){
        n1 = n2;
        n2 = n3;
        n3 = n1 % n2;
    }
    return n2;
}