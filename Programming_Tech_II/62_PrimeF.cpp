/*
    TASK: 62_Prime Factorization
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int ans[110];
int main()
{
    int q,n,i,sq,cnt=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        sq = sqrt(n);
        for(i=2,cnt=0;i<=sq;i++){
            if(n%i==0){
                while(n%i==0){
                    ans[cnt] = i;
                    n/=i;
                    cnt++;
                }
            }
        }
        if(n!=1){
            ans[cnt]=n;
            cnt++;
        }
        for(i=0;i<cnt-1;i++){
            printf("%d x ",ans[i]);
        }printf("%d\n",ans[i]);
        memset(ans,0,sizeof ans);
    }
    return 0;
}

