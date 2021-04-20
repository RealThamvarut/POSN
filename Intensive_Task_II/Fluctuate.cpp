/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mn=1e9,n,i,ans=0,now;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&now);
        ans = max(ans,now-mn);
        mn = min(now,mn);
    }
    printf("%d",ans);
    return 0;
}
