/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int x[500500],y[500500];
int main()
{
    int n,m,i,j,ans=0,num;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x,x+n);
    sort(y,y+n);
    while(m--){
        scanf("%d",&num);
        i = lower_bound(x,x+n,num) - x;
        j = upper_bound(y,y+n,num) - y;
        ans += i-j;
        ans%=2007;
    }
    printf("%d\n",ans);
    return 0;
}
/*
4 5 10 30 5 15 1 15 5 50 5 12 15 40 80
*/
