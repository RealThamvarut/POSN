/*
    TASK: SHIP
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int x[500],y[500];
int main()
{
    int n,i,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);
    for(i=1;i<=n;i++){
    ans += abs(x[i]-i) +abs(y[i]-i);

    }
    printf("%d\n",ans);
    return 0;
}
/*
5 2 3 3 2 3 3 3 4 4 3
*/
