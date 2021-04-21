/*
    TASK: Slikar
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,type;
    //1 = human / 2= water
};
queue< A > bfs;
char a[100][100];
int dis[100][100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int main()
{
    int r,c,i,j,si,sj,ei,ej,ii,jj,t,k;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S')    si=i,sj=j;
            if(a[i][j]=='D')    ei=i,ej=j;
            if(a[i][j]=='*')    bfs.push({i,j,1});
        }
    }
    bfs.push({si,sj,2});
    memset(dis,-1,sizeof dis);
    dis[si][sj]=0;
    while(!bfs.empty()){
        i=bfs.front().i , j=bfs.front().j, t=bfs.front().type;
        bfs.pop();
        if(i==ei&&j==ej&&t==2){
            printf("%d\n",dis[i][j]);
            return 0;
        }
        for(k=0;k<4;k++){
            ii=i+di[k], jj=j+dj[k];
            if(ii<0||jj<0||ii>=r||jj>=c)    continue;
            if(a[ii][jj]=='X'||a[ii][jj]=='*')              continue;
            if(ii==ei&&jj==ej&&t==1)        continue;
            if(dis[ii][jj]!=-1)             continue;
            dis[ii][jj] = dis[i][j] +1;
            bfs.push({ii,jj,t});
        }
    }
    printf("KAKTUS\n");
    return 0;
}
/*
3 3
D . *
. . .
. . S
3 6
D...*.
.X.X..
....S.
*/
