/*
    TASK: Draw Number
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10][10];
map<int,int>
int main()
{
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                play(i,j);
            }
        }
    }

    return 0;
}

