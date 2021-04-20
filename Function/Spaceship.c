20/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int n,p,At[20][3],HAVE[20][3],Min=2e9,mark[15];

void play(int x,int y,int z,int m,int k,int c,int sum){
    int i,now,mm,kk,cc;
    if(m>=n&&k>=n&&c>=n){
        if(sum < Min) Min = sum;
        return;
    }
    for(i=0;i<p;i++){
        if(!mark[i]){
            mark[i] = 1;
            now = (x-At[i][0])*(x-At[i][0])+(y-At[i][1])*(y-At[i][1])+(z-At[i][2])*(z-At[i][2]);
            play(At[i][0],At[i][1],At[i][2],m+HAVE[i][0],k+HAVE[i][1],c+HAVE[i][2],sum+now);
            mark[i] = 0;
        }
    }
}

int main()
{
    int x,y,z,i;
    scanf("%d %d %d %d %d" ,&n ,&x ,&y ,&z ,&p);
    for(i=0;i<p;i++){
        scanf("%d %d %d",&At[i][0],&At[i][1],&At[i][2]);
        scanf("%d %d %d",&HAVE[i][0],&HAVE[i][1],&HAVE[i][2]);
    }
    play(x,y,z,0,0,0,0);
    printf("%d\n",Min);

    return 0;
}
/*
1 0 0 0 2 10 0 0 2 5 7 0 10 0 0 3 9
*/
