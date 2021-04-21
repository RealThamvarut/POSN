/*
    TASK: Earn_salary
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int sum[100100];
void dfs(int u){
    for(auto x: g[u]){
        sum[x] += sum[u];
        dfs(x);
    }
}
int main()
{
    int n,m,i,a,b;
    scanf("%d %d",&n,&m);
    for(i=0;i<n-1;i++){
        scanf("%d %d",&a,&b);
        g[b].push_back(a);
        //a is subset of b
    }
    while(m--){
        scanf("%d %d",&a,&b);
        sum[a] += b;
    }
    dfs(1);
    for(i=1;i<=n;i++)
        printf("%d\n",sum[i]);
    return 0;
}
/*
10 10
 5 1
 4 2
 2 6
 8 7
 9 3
 3 2
 6 5
 7 6
 10 1
 9 9 1 1 9 6 1 2 9 8 1 2 4 7 2 9 6 7 2 4
 */
