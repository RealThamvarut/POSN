/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map <int, int> mp;
int a[100100];
int ans[100100];
int main()
{
    int q,n,cnt=0,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            mp[a[i]]++;
        }
        for(i=0,cnt=0;i<n;i++){
            if(mp[a[i]]==1){
                ans[cnt++] = a[i], mp[a[i]]=0;
            }
        }
        if(cnt==0){
            printf("No Alone Num\n");
        }
        else{
            for(i=0;i<cnt;i++){
                printf("%d ",ans[i]);
            }
            printf("\n");
        }

        mp.clear();
        memset(ans,0,sizeof ans);
    }
    return 0;
}
/*
3
9
3 2 1 2 3 7 3 6 8
7
1 3 2 4 2 0 1
6 -1 -2 -3 -3 -2 -1

*/
