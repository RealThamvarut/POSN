/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char a[100][100],b[200],mark[200][200];
int e[200][2],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},r,c,len,ch;
void play(int i,int j,int state){
    e[state][0] = i+1, e[state][1] = j+1;
    int k,ni,nj;
    if(state==len-1){
        for(k=0;k<=state;k++){
            printf("%d %d\n",e[k][0],e[k][1]);
        }
        ch=0;
        return ;
    }
    for(k=0;k<4;k++){
        ni = i+di[k], nj=j+dj[k];
        if(ni<0||ni>=r||nj<0||nj>=c)    continue;
        if(mark[ni][nj])    continue;
        if(a[ni][nj]!=b[state+1])   continue;
        mark[ni][nj] =1;
        play(ni,nj,state+1);
        mark[ni][nj] = 0;
    }
}
int main()
{
    int i,j,q;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = tolower(a[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++){
            b[i] = tolower(b[i]);
        }
        for(i=0,ch=1;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j] == b[0]){
                    mark[i][j] =1;
                    play(i,j,0);
                    mark[i][j] = 0;
                }
            }
        }
        if(ch) printf("No Matching Word\n");
        memset(mark,0,sizeof mark);

    }

    return 0;
}
