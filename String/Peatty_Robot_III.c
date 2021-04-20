/*
    TASK:
    LANG: C
    AUTHOR:
    SCHOOL: RYW
*/
#include <bits/stdc++.h>
using namespace std;

char s[210];

int main(){

    int k, delta, up = 0, down = 0, leftt = 0, rightt = 0, ans;
    char c;
    scanf(" %s", s);
    scanf("%d", &k);
    for(int i = 0; i < strlen(s); i++){
        c = s[i];
        if(c == 'N')
            up++;
        else if(c == 'E')
            rightt++;
        else if(c == 'S')
            down++;
        else
            leftt++;
    }
    if(up >= down){
        delta = min(k, down);
        down -= delta;
        k -= delta;
    }
    else{
        delta = min(k, up);
        up -= delta;
        k -= delta;
    }
    if(rightt >= leftt){
        delta = min(k, leftt);
        leftt -= delta;
        k -= delta;
    }
    else{
        delta = min(k, rightt);
        rightt -= delta;
        k -= delta;
    }
    ans = abs(up - down) + abs(rightt - leftt) - k;
    printf("%d\n", ans*2);
    return 0;
}
