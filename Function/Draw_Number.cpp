/*
    TASK: Draw Number
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int a[10][10];
map<int,int> mp;
void play(int i,int j,int num,int state){
    if(i<1||j<1||i>5||j>5)  return ;
    if(state==5){
        mp[num] = 1;
        return ;
    }
    play(i-1,j,num*10+a[i-1][j],state+1);
    play(i+1,j,num*10+a[i+1][j],state+1);
    play(i,j-1,num*10+a[i][j-1],state+1);
    play(i,j+1,num*10+a[i][j+1],state+1);
}
int main()
{

    int q,i,j;
    scanf("%d",&q);
    while(q--){
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                play(i,j,a[i][j],0);
            }
        }
        printf("%d\n",mp.size());
        mp.clear();
        memset(a,0,sizeof a);
    }
    return 0;
}
/*
1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 2 1
1 1 1 1 1
*/
