/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int dp[100010];

int main()
{
    int q, n;
    scanf("%d", &q);
    while(q--){
        int ch = 0;
        scanf("%d", &n);
        memset(dp, 0, sizeof dp);
        for(int i = 1; i <= n; i++){
            scanf("%d", &dp[i]);
            dp[i] += dp[i-1];
        }
        int sum = dp[n];
        if(sum % 2 != 0){
            printf("NO\n");
            continue;
        }
        for(int i = 1; i <= n; i++){
            if(dp[i] * 2 == sum){
                printf("%d\n", i);
                ch = 1;
                break;
            }
        }
        if(ch){
            continue;
        }
        for(int i = 1; i <= n; i++){
            printf("%d ", dp[i]);
        }
        printf("\n");
        for(int i = 1; i <= n; i++){
            int idx = lower_bound (dp + 1, dp + n + 1, dp[i] + (sum / 2)) - dp;
            /// arr + 0, arr + n
            /// arr + 1, arr + n + 1
            /// arr + l, arr + r + 1
            printf("i : %d idx : %d dp[i] : %d dp[idx] %d\n", i, idx, dp[i], dp[idx]);
            if((dp[idx] - dp[i]) * 2 == sum){
                printf("%d %d\n", i, idx);
                ch = 1;
                break;
            }
        }
        if(ch){
            continue;
        }
        printf("NO\n");
    }
    return 0;
}
/*
3
8
3 1 2 1 1 2 1 1
8
2 1 3 1 5 4 1 5
8
10 20 3 40 5 7 15 2
*/
