/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
string a[10100],b;

map <string, int> mp;

int main()
{
    int m,n,k,i;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]] = 1;
    }
    sort(a,a+n);
    while(m--){
        cin >> b;
        if(mp[b] == 1){
            printf("Accepted");
        }
        else{
            printf("Rejected");
        }
        i = lower_bound(a,a+n,b) - a;
        printf(a[i]==b?"Accepted\n":"Rejected\n");
    }

    return 0;
}
/*
5 3 4
PEAT
LOVE
PLAY
SUCK
KITE
KISS
KITE
SUCK

*/
