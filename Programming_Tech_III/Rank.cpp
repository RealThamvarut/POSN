/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[200200];
int main()
{
    int n,m,i,num;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }sort(a,a+n);
    while(m--){
        scanf("%d",&num);
        i = upper_bound(a,a+n,num)-a;
        printf("%d\n",n-i+1);
    }
    return 0;
}
/*
5 4
75
84
90
94
99
100
77
85
95
*/
