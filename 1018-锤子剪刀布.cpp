#include <iostream>
#include <math.h>
using namespace std;

int change(char c){
    if(c=='B')return 0;
    if(c=='C')return 1;
    if(c=='J') return 2;
}
int main() {
    char mp[3]={'B','C','J'};
    int n;
    scanf("%d",&n);
    //记录甲乙胜平负和三个手势的获胜次数
    int times_A[3]={0};
    int times_B[3]={0};
    int hand_A[3]={0};
    int hand_B[3]={0};

    char c1,c2;
    //用来判断获胜
    int k1,k2;
    for (int i = 0; i < n; ++i) {
        getchar();
        scanf("%c %c",&c1,&c2);
        //转换数字
        k1=change(c1);
        k2=change(c2);
        //甲赢
        if ((k1+1)%3==k2){
            times_A[0]++;
            times_B[2]++;
            hand_A[k1]++;
        }
            //平均
        else if(k1==k2){
            times_A[1]++;
            times_B[1]++;
        }
            //乙赢
        else{
            times_A[2]++;
            times_B[0]++;
            hand_B[k2]++;
        }
    }

    printf("%d %d %d\n",times_A[0],times_A[1],times_A[2]);
    printf("%d %d %d\n",times_B[0],times_B[1],times_B[2]);
    int id1=0,id2=0;
    //找出甲乙中获胜最多的手势
    for (int j = 0; j < 3; ++j) {
        if (hand_A[j]>hand_A[id1])id1=j;
        if (hand_B[j]>hand_A[id2])id2=j;
    }
    printf("%c %c\n",mp[id1],mp[id2]);
    return 0;
}
