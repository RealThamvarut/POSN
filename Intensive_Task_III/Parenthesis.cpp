/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
stack<char> st;
char a[1000];
int main()
{
    int q,i,len,ch;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        for(i=0,ch=1;i<len;i++){
            if(a[i]=='('||a[i]=='['){
                st.push(a[i]);
            }
            else if(a[i]==')'){
                if(st.empty() || !st.empty() && st.top()!='('){
                    ch=0; break;
                }
                st.pop();
            }
            else if(a[i]==']'){
                if(st.empty() || !st.empty() && st.top()!='['){
                    ch=0; break;
                }
                st.pop();
            }
        }
        if(ch && st.empty()){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
        memset(a,0,sizeof a);
        while(!st.empty()){
            st.pop();
        }
    }
    return 0;
}/*
3
([])
(([()])))
([()[]()])()
*/
