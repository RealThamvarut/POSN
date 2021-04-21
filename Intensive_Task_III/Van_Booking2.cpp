/*
    TASK: Van Booking 2
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int in,a;
    bool operator < (const A& o) const{
        if(a != o.a)    return a > o.a;
        //normal is a < o.a but this is priority queue
        return in > o.in;
    }
};
priority_queue< A > h;
int main()
{
    int n,k,i,num,a,in;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++){
        h.push({i,0});
    }
    while(n--){
        scanf("%d",&num);
        in = h.top().in , a = h.top().a;
        h.pop();
        printf("%d\n",in);
        h.push({in,a+num});
    }

    return 0;
}
//6 3 3 1 2 2 2 1
