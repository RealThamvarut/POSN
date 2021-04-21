/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int x[100100],y[100100];
int main()
{
    int n,k,i,ans=0,idx;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x,x+n);
    sort(y,y+n);
    for(i=0;i<n;i++){
        idx = lower_bound(x,x+n,x[i]+k)-x;
        /// 2 - 5
        /// x + 2, x + 6,
        /// x + 1, x + n + 1, k - x - 1
        ans = max(ans,idx-i);
    }
    for(i=0;i<n;i++){
        idx = lower_bound(y,y+n,y[i]+k)-y;
        ans = max(ans,idx-i);
    }
    printf("%d\n",ans);
    return 0;
}
/*
3 3 1 2 3 5 5 5
*/
