#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[1000],b[1000];
int main()
{
    ll i,n,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++){
        sum += a[i]*b[n-i-1] ;
    }
    printf("%lld\n",sum);
    return 0;
}
/*
3 1 3 -5 -2 4 1
*/
