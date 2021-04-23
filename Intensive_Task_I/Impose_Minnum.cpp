/*
    TASK: Impose Minnum
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    string str;
    bool operator < (const A&o)const{
        if(str+o.str<o.str+str)   return true;
        return false;
    }

};
A a[100100];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin >> a[i].str;
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        cout << a[i].str;
    }
    return 0;
}
// 5 1 2 1 4 3
