/*
    TASK: Castle King
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[500500];
int main()
{
    long long n,ans=0,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }sort(a,a+n);
    for(i=0;i<n;i++){
        ans += a[i]*2;
    }
    printf("%lld\n",ans+a[n-1]*2+n);
    return 0;
}
/*
7 4 6 2 4 3 5 4
*/
