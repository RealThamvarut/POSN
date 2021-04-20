/*
    TASK: Slip TRi
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            scanf("%d",&dp[i][j]);
        }
    }
    for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++)
            dp[i][j] += max(dp[i+1][j],dp[i+1][j+1]);
    }
    printf("%d\n",dp[0][0]);
    return 0;
}
/*
5 7 3 8 8 1 0 2 7 4 4 4 5 2 6 5
*/
