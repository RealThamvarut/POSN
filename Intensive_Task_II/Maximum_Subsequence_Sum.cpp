/*
    TASK: Maximum_Subsequence_Sum
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0,mx=-2000000000,s,st=1,e,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        sum += num;
        if(sum > mx){
            mx = sum,s=st,e=i;
        }
        if(sum<0){
            sum=0,st=i+1;
        }
    }
    printf("%d %d\n%d\n",s,e,mx);
    return 0;
}
/*
5 4 -6 3 -2 6
*/
