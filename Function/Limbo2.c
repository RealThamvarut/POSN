/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
char a[1010][1010];
int r,c,cnt,mn=2e9;
void play(int i,int j){
    if(i<0||j<0||i>=r||j>=c)    return ;
    if(a[i][j]=='.')            return ;
    a[i][j] = '.',cnt++;
    play(i-1,j); play(i+1,j);
    play(i,j-1); play(i,j+1);
    play(i-1,j-1); play(i-1,j+1);
    play(i+1,j-1); play(i+1,j+1);
}
int main()
{
    int i,j;
    scanf("%d %d",&c,&r);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]=='*'){
                cnt = 0;
                play(i,j);
                if(mn > cnt) mn=cnt;
            }
        }
    }
    printf("%d\n",mn);

    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***



*/
