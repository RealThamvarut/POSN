/*
    TASK: Mobile Find
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int x[35][35];
int cht[35][35];
int H,W;
int main()
{
    int t;
    int sum=-1;
    int h,k;
    scanf("%d",&t);
    while(t--){
        h=k=1;
        sum=0;
        scanf("%d %d",&H,&W);
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                scanf("%d",&x[i][j]);
            }
        }
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(x[i][j]+x[i][j+1] > sum &&j+1<W &&abs(x[i][j+1]-x[i][j])<=10){
                        h=i+1;
                        k=j+1;
                        sum=abs(x[i][j+1]+x[i][j]);
                    }
                if(x[i][j]+x[i+1][j] > sum&&i+1<H && abs(x[i+1][j]-x[i][j])<=10){
                        h=i+1;
                        k=j+1;
                        sum=abs(x[i+1][j]+x[i][j]);
                    }
            }
        }
        printf("%d %d\n",h,k);
    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0
*/
