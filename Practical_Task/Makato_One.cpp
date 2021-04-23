/*
    TASK: Makato_One
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int q,n,r,c,i,num;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[i] = a[i-1] ^ num;
    }
    while(q--){
        scanf("%d %d",&r,&c);
        printf("%d\n",a[c]^a[r-1]);
    }

    return 0;
}
/*
5 5 2 6 2 9 1 5 5 1 5 2 3 4 5 2 4

*/
