/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define fr  for(i=0;i<n;i++)
using namespace std;
int a[100100],b[100100];
int main()
{
    int n,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++){
        ans = max(ans,min(a[i],b[i]));
    }
    printf("%d\n",ans);
    return 0;
}
/*


*/
