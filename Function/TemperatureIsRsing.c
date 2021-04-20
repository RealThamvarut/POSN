/*
    TASK: Temperature is rising
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[30][30],n,ans=-1e8;
void play(int i, int j){
    if(i<=0||j<=0||i>n||j>n)    return ;
    if(a[i][j]==100)            return ;
    if(a[i][j]>ans)     ans=a[i][j];
    if(a[i-1][j]>a[i][j]) play(i-1,j);
    if(a[i+1][j]>a[i][j]) play(i+1,j);
    if(a[i][j-1]>a[i][j]) play(i,j-1);
    if(a[i][j+1]>a[i][j]) play(i,j+1);
}
int main()
{
    int i,j,si,sj;
    scanf("%d %d %d",&n,&sj,&si);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    play(si,sj);
    printf("%d\n",ans);
    return 0;
}
/*
4 2 1 100 1 3 8 0 2 1 4 2 3 5 100 0 8 8 100
*/
