/*
    TASK: Easiest
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> h;

int main()
{
    int p,num;
    char a;
    scanf("%d",&p);
    while(p--){
        scanf(" %c",&a);
        if(a=='A'){
            scanf("%d",&num);
            h.push(-num);
        }
        else{
            if(h.empty())
                printf("-1\n");
            else{
                printf("%d\n",h.top()*-1);
                h.pop();
            }
        }
    }
    return 0;
}
// 9 A 7 A 3 A 5 A 3 B A 4 B B B
