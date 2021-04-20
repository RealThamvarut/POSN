/*
    TASK: LABOR_AT_THE_DOCK
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1001000];
int main()
{
    ll n,m,l,r,mid,i,sum;
    scanf("%lld %lld",&n,&m);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    l=0,r=1e18;
    while(l<r){
        mid = (l+r)/2;
        for(i=0,sum=0;i<n;i++){
            sum+= mid/a[i];

        }
        if(sum>=m){
            r = mid;
        }
        else l = mid+1;
    }
    printf("%lld\n",l);
    return 0;
}
