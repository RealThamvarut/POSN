/*
    TASK: BREAK;
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int s,f;

};
stack< A > st;
int main()
{
    int n,i,s,f;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&s,&f);
        while(!st.empty() && s > st.top().s){
            printf("%d\n",st.top().f);
            st.pop();
        }
        st.push({s,f});
    }
    printf("\n");
    return 0;
}
// 5 1 10 5 20 3 30 3 40 4 50
