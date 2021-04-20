/*
    TASK: Roam
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int dp[100100];
int main()
{
    int n,m,a,b,q,i;
    scanf("%d %d",&n ,&m);
    while(m--){
        scanf("%d %d",&a,&b);
        dp[a]++,dp[b+1]--;
    }
    for(i=1;i<=n;i++){
        dp[i] += dp[i-1];
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&i);
        printf("%d",dp[i]);
    }
    return 0;
}
/*
5 2 1 3 2 4 3 3 5 4
*/
