/*
    TASK: Hand mak Hand lak lhai
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[2200];
int main()
{
    int n,k,ans=0,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,greater<int>());
    for(i=0;i<n;i+=k){
        ans +=a[i];
    }
    printf("%d\n",ans);
    return 0;
}
/*
5 3 6 1 2 8 7
*/
