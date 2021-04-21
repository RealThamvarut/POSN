/*
    TASK: J'Ra 2nd Shop
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[10],ans;
int a[10],b[10];
void dfs(int u,int state){
    if(u==2&&a[2]){
        int num=0,i;
        for(i=0;i<state;i++){
            num*=10; num+=b[i];
        }
        ans.push_back(num);
        return ;
    }
    if(a[u]) return ;
    a[u] = 1;
    b[state] = u;
    for(auto x:g[u])
        dfs(x,state+1);
    //backtrack is very important
    a[u] = 0;
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&i,&j);
        g[i].push_back(j), g[j].push_back(i);


    }
    dfs(2,0);
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        printf("%d2\n",x);
    }

    return 0;
}
// 6 1 2 1 3 1 4 2 3 3 4 3 5
