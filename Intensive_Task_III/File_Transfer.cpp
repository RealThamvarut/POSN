/*
    TASK:  File transfer
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int > g[1010];
int mark[1010];
void dfs(int u){
    if(mark[u]) return ;
    mark[u] = 1;
    for(auto x: g[u])
        dfs(x);
}
int main()
{
    int n,m,q,s,e;
    scanf("%d %d %d",&n,&m,&q);
    while(m--){
        scanf("%d %d",&s,&e);
        g[s].push_back(e);
    }
    while(q--){
        scanf("%d %d",&s,&e);
        dfs(s);
        printf(mark[e]?"Yes\n":"No\n");
        memset(mark,0,sizeof mark);
    }

    return 0;
}
// 5 5 3 1 2 2 3 1 4 4 5 3 4 3 5 1 3 3 1
