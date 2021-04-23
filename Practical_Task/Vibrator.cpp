/*
    TASK: Vibrator
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[50100];
int main()
{
    dp[0] = 1;
    int c,n,num,i;
    scanf("%d %d",&c,&n);
    while(n--){
        scanf("%d",&num);
        for(i=c;i>=num;i--){
            if(dp[i-num])
                dp[i] = 1;
        }
    }
    for(i=c;i>=1;i--){
        if(dp[i]){
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}
/*
7 3 2 6 5
*/
