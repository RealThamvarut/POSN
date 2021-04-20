/*
    TASK: Combination
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[15],b[15],n,r,k,cnt;
void play(int state, int last){
    int i;
    if(state==r){
        cnt++;
        if(cnt == k){
            for(i=0;i<r;i++)
                printf("%d ",b[i]);
            printf("\n");
        }
        return ;
    }
    for(i=last+1;i<=n;i++){
        if(!a[i]){
            a[i] = 1;
            b[state] = i;
            play(state+1,i);
            a[i] = 0;
        }
    }
}
int main()
{
    scanf("%d %d %d",&n,&r,&k);
    play(0,0);
    return 0;
}
