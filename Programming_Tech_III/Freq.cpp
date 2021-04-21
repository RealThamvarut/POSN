/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

struct A{
    int val, freq, idx;
    bool operator < (const A& o) const{
        if(freq != o.freq)
            return freq > o.freq;
        return idx < o.idx;
    }
};

map <int, int> freq;

int a[1010];
A ans[1010];

int main()
{
    int n, m, c, num;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(freq[a[i]] > 0){
            ans[cnt].val = a[i];
            ans[cnt].idx = i;
            ans[cnt].freq = freq[a[i]];
            freq[a[i]] = 0;
            cnt++;
        }
    }
    sort(ans, ans + cnt);
    for(int i = 0; i < cnt; i++){
        while(ans[i].freq--){
            printf("%d ", ans[i].val);
        }
    }
    return 0;
}
