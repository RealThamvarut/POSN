/*
    TASK: Plane MH370
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map <string, int> mp;
string a;
int main(){

    int q,n,m,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            cin >> a;
            //mark map
            mp[a] = 1;
        }
        printf((mp.size()==n)?"yes\n":"no\n");
        mp.clear();
    }
    return 0;
}
/*
2
3 4
bangkok
phuket
pai
bangkok
3 1
phuket
*/
