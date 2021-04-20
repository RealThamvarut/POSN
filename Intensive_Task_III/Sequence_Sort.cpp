/*
    TASK: Sequence Sort
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector< vector<int> > b;

int main()
{
    int n,k,i,j,num;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            scanf("%d",&num);
            a.push_back(num);
        }
        b.push_back(a);
        a.clear();
    }
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    return 0;
}
// 5 3 7 10 6 1 3 5 1 2 7 1 3 4 3 10 6
