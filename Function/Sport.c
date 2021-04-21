/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int k,win,lose,ans[200];

void play(int a,int b,int state){
    if(a==k||b==k){
        int i;
        for(i=0;i<state;i++){
            if(ans[i]==1)   printf("W ");
            else            printf("L ");
        }
        printf("\n");
        return 0;
    }
    ans[state] = 1;
    play(a+1,b,state+1);
    ans[state] = 2;
    play(a,b+1,state+1);
}

int main()
{
    scanf("%d %d %d",&k,&win,&lose);
    play(win,lose,0);

    return 0;
}
