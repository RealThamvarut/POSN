/*
    TASK: Soldier
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int ran,in,id;
    bool operator < (const A& o) const{
        if(ran != o.ran) return ran < o.ran;
        return in > o.in;
    }

};

priority_queue<A> h;
int main()
{
    int n,r,i,j,ran,id;
    scanf("%d %d",&n,&r);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==1){
            scanf("%d %d",&id,&ran);
            h.push({ran, i, id});
        }
        else{
            if(h.empty())   printf("-1\n");
            else            printf("%d\n",h.top().id), h.pop();
        }
    }

    return 0;
}
//6 5 2 1 20 4 1 11 4 2 1 3 5 2
