/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int dp[100100];


int main()
{
    int n,q,i,num,r,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        dp[i] = num+ dp[i-1];
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&r ,&s);
        printf("%d\n",dp[s]-dp[r-1]);
    }
    return 0;
}

