/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[110];
int main(){

    int i,n;
    dp[0] = 1;
    for(i=6;i<=100;i++){
        if(i>=6 && dp[i-6]) dp[i]=1;
        if(i>=9 && dp[i-9]) dp[i]=1;
        if(i>=20 && dp[i-20]) dp[i]=1;
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(dp[i])
            printf("%d\n",i);
    }
    if(n<6){
        printf("no\n");
    }
    return 0;

}

