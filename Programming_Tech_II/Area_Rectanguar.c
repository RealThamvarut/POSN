/*
    TASK: Area Rec
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int dp[1010][1010];

int main()
{
    int r,c,q,i,j,k,l,num;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&num);
            dp[i][j] = dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+num;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&i,&j,&k,&l);
        i++,j++,k++,l++;
        printf("%d\n",dp[k][l]-dp[k][j-1]-dp[i-1][l]+dp[i-1][j-1]);
    }

    return 0;
}
/*
3 4 3 7 -2 12 0 -4 9 -3 6 3 8 -1 2 0 1 1 3 0 0 2 2
*/
