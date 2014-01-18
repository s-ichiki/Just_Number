#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//sleep関数の作成
void sleep(double s){
    clock_t start=clock();
    do{}while(((double)(clock()-start)/CLOCKS_PER_SEC)<s);
}

int tensai(int b,int c,int s);

int main(int argc, char** argv){
    int i,b,c,s,a;
    c = rand() % 1000;
    
    printf("\n\n\n");
    printf("+===============================+\n");
    printf("|    準備はいいか？クズども     |\n");
    printf("|     ∧,,∧             　　   　|\n");
    printf("|     ( 'ω' )つ             　　|\n");
    printf("|   m9 ＼  ＼  １０回以内で     |\n");
    printf("|       ＼　 ＼  正解を見つけろ |\n");
    printf("|    　   ) ) ＼                |\n");
    printf("|       ／／ ＼ ＼        　    |\n");
    printf("|      (＿）   (＿)      　     |\n");
    printf("+===============================+\n\n\n");
    
    sleep(3);
    
    printf("\n\n\n");
    printf("+===============================+\n");
    printf("|                               |\n");
    printf("|     ∧,,∧                      |\n");
    printf("|    (´・ω・)  あたまを使って   |\n");
    printf("|   ⊂ノ　　ニつ 　設定された　　|\n");
    printf("|   （`(´　ノ     ３桁の数字を  |\n");
    printf("|   　|｜ ﾉ        当てるのだ！ |\n");
    printf("|   （_(＿)           　　   　 |\n");
    printf("+===============================+\n\n\n");
    
    sleep(3);
    
    printf("+===================================+\n");
    printf("|     準備が出来たらエンターキー！  |\n");
    printf("+===================================+\n");
    printf("ー＞");
    getchar();
    
    sleep(1);
    
    printf("※注）半角英数で入力してね\n");
    
    sleep(2);
    
    printf("+===============================+\n");
    printf("|        Are you ready???       |\n");
    printf("+===============================+\n");
    printf("\n\n");
    
    sleep(3);
    
    printf("+===============================+\n");
    printf("|                               |\n");
    printf("|         33333333333           |\n");
    printf("|                   3           |\n");
    printf("|                   3           |\n");
    printf("|         33333333333           |\n");
    printf("|                   3           |\n");
    printf("|                   3           |\n");
    printf("|         33333333333           |\n");
    printf("|                               |\n");
    printf("+===============================+\n");
    
    sleep(1);
    
    printf("\n\n");
    printf("+===============================+\n");
    printf("|                               |\n");
    printf("|         22222222222           |\n");
    printf("|                   2           |\n");
    printf("|                   2           |\n");
    printf("|         22222222222           |\n");
    printf("|         2                     |\n");
    printf("|         2                     |\n");
    printf("|         22222222222           |\n");
    printf("|                               |\n");
    printf("+===============================+\n");
    sleep(1);
    printf("\n\n");
    printf("+===============================+\n");
    printf("|                               |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|              1                |\n");
    printf("|                               |\n");
    printf("+===============================+\n");
    sleep(1);
    printf("\n\n");
    printf("+=================================+\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("| SSSS TTTTT AAAAA  RRRRR  TTTTT  |\n");
    printf("| S      T   A   A  R   R    T    |\n");
    printf("| SSSS   T   AAAAA  RRRRR    T    |\n");
    printf("|    S   T   A   A  R R      T    |\n");
    printf("| SSSS   T   A   A  R   R    T    |\n");
    printf("|                                 |\n");
    printf("|                                 |\n");
    printf("+=================================+\n");
    sleep(1);
    
    for(i=0;i<10;i++){
        s=9-i;
        printf("+===============================+\n");
        printf("|    数を入力してください       |\n");
        printf("+===============================+\n");
        printf("ー＞");
        scanf("%d",&b);
        printf("\n");
        a=tensai(b,c,s);
        
        if(a==0){
            break;
        }
    }
    if(a!=0){
        fflush(stdout);
        sleep(2);
        printf("お？？");
        fflush(stdout);
        sleep(3);
        printf("お？？");
        fflush(stdout);
        sleep(3);
        printf("お？？");
        
        fflush(stdout);
        sleep(4);
        printf("\n\n");
        printf("+=============================+\n");
        printf("|    ∧∧.∩         ∩_ ・∵’、   |\n");
        printf("|   ( 　　 )/  ⊂／\"´ ﾉ　)     |\n");
        printf("|  ⊂     ﾉ      /　　 /vV     |\n");
        printf("|　　( 　 ﾉ　　　 し'`∪       |\n");
        printf("|　　 (ノ ざんね〜ん！ 　　 　|\n");
        printf("|            正解は%dでした  |\n",c);
        printf("+=============================+\n");
    }
    return 0;
}

int tensai(b,c,s){
    if(b<c){
        if(s!=0){
            printf("+=============================+\n");
            printf("|      もっと大きいかな？　　 |\n");
            printf("|            　　※残りあと%d回 |\n",s);
            printf("+=============================+\n");
        }
        if(s==0){
        }
        return 1;
    }
    if(b>c){
        if(s!=0){
            printf("+=============================+\n");
            printf("|     もっと小さいかな？      |\n");
            printf("|             ※残りあと%d回    |\n",s);
            printf("+=============================+\n");
        }
        if(s==0){
        }
        return 2;
    }
    if(b==c){
        fflush(stdout);
        sleep(2);
        printf("お？？");
        fflush(stdout);
        sleep(2);
        printf("お？？");
        fflush(stdout);
        sleep(2);
        printf("お？？");
        
        fflush(stdout);
        sleep(4);
        printf("\n\n");
        printf("+===================================+\n");
        printf("|      ∧ ∧＿_                       |\n");
        printf("|    ／(*ﾟーﾟ) ／＼おめでとう！     |\n");
        printf("|    ／|￣∪∪￣|＼／                 |\n");
        printf("|      |　しぃ　|／                 |\n");
        printf("| あなたは残り%d回で正解出来ました！ |\n",s);
        printf("+===================================+\n");
        return 0;
    }
    return 0;
}