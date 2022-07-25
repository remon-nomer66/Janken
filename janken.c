#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int My_hand(), My_hand_ans();
int Com_hand(),Com_hand_ans();
int Win_or_lose();

int main(){
    int MYHAND,MYHANDANS;
    int COMHAND,COMHANDANS;
    int WINORLOSE;
    
    //入力された値の判別
    while(1){
        MYHAND = My_hand();
        MYHANDANS = My_hand_ans(MYHAND);
        COMHAND = Com_hand();
        COMHANDANS = Com_hand_ans(COMHAND);
        WINORLOSE = Win_or_lose(MYHAND,COMHAND);
        if(WINORLOSE == 0){
            break;
        }
    }
}

int My_hand(){
    int n1;
    printf("お前の手を出しな[グー:0,チョキ:1,パー:2]\n");
    scanf("%d",&n1);
    return n1;
}

int My_hand_ans(MYHAND){
    if(MYHAND == 0){
        printf("お前はグーを出した\n");
    }else if(MYHAND == 1){
        printf("お前はチョキを出した\n");
    }else if(MYHAND == 2){
        printf("お前はパーを出した\n");
    }else{
        printf("指定した数値を打とうね\n");
     return 1;   
    }
    return 0;
}

int Com_hand(){
    int n2;
    srand(time(0)); //時間を基準にランダムに初期化する
    n2 = rand() % 3;
    return n2;
}

int Com_hand_ans(COMHAND){
    if(COMHAND == 0){
        printf("ヤツはグーを出した\n");
    }else if(COMHAND == 1){
        printf("ヤツはチョキを出した\n");
    }else{
        printf("ヤツはパーを出した\n");
    }
    return 0;
}

int Win_or_lose(MYHAND,COMHAND){
    if((COMHAND - MYHAND + 3)%3 == 0){
        printf("aikoです\n");
        return 1;
    }else if((COMHAND - MYHAND + 3)%3 == 1){
        printf("あなたの勝利です\n");
    }else{
        printf("あなたの敗北です\n");
    }
    return 0;
}