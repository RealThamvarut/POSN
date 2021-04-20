/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010];
int b[1010];
int main()
{
    int q,n,i,j,cnt,ch,ans,now;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        cnt=0,ch=1,ans=0;
        for(i=0;i<n;i=j){
            for(j=i+1;j<n&&a[i]==a[j];j++);
                now = j-i;
                if(now%2==1){
                    b[cnt++] =a[i],ch=0;
                }
                ans += now/2;
        }
        cout << ans << "\n";
        if(ch){
            printf("Empty\n");
        }
        else{
            for(i=0;i<cnt;i++){
                printf("%d ",b[i]);
            }cout << "\n";
                }

        memset(a,0,sizeof a), memset(b,0,sizeof b);
    }
    return 0;
}
/*
2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
4
1 8 8 1
*/
