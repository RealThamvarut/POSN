#include<bits/stdc++.h>
using namespace std;
int dp[45010];
int main(){
    int i,j,n,num,sum=0,ans1,ans2,mn=1e9;
    dp[0]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        sum += num;
        for(j=45000;j>=num;j--){
            if(dp[j-num]==1)
                dp[j] = 1;
        }
    }
    for(i=0;i<=sum/2;i++){
        if(dp[i]){
            if(abs(sum-2*i)<mn){
                mn = abs(sum-2*i);
                ans1 = i;
                ans2 = sum-i;
            }
        }
    }
    if(ans1 > ans2){
        swap(ans1,ans2);
    }
    printf("%d %d\n",ans1,ans2);

    return 0;
}
