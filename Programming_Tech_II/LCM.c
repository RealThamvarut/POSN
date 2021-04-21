/*
    TASK: LCM//Least common multiplier
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#define ll long long
#include<stdio.h>
ll gcd(ll a, ll b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main()
{
    ll n,ans,i,num;
    scanf("%lld %lld",&n,&ans);
    for(i=0;i<n-1;i++){
        scanf("%lld",&num);
        ans = ans*num/gcd(ans,num);
    }
    printf("%lld\n",ans);
    return 0;
}

