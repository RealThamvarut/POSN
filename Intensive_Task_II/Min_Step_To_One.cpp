/*
    TASK: Min step to one
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1001000];

int main()
{
    int i,n,q;
    for(i=2;i<=1000000;i++){
        dp[i] = dp[i-1] + 1; // p=p-1
        if(!(i%2)){
            dp[i] = min(dp[i],dp[i/2]+1);
        }
        if(!(i%3)){
            dp[i] = min(dp[i],dp[i/3]+1);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
