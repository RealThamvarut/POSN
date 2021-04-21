/*
    TASK: GCD //Greatest common divisor
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int gcd(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
int main()
{
    int n,ans,i,num;
    scanf("%d %d",&n,&ans);
    for(i=0;i<n-1;i++){
        scanf("%d",&num);
        ans = gcd(ans,num);
    }
    printf("%d\n",ans);
    return 0;
}
