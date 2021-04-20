/*
    TASK: Fractal
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char a[5000][2000];

int main()
{
    int n,r=1,c=1,rn,cn,i,j,k;
    //n<=11
    memset(a, '-' ,sizeof(a));
    scanf("%d",&n);
    a[0][0] = '*';

    for(int k=0;k<n-1;k++){
        rn = 2*r+1, cn = 2*c;
        for(j=0;j<cn;j++){
            a[r][j]='*';
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                a[r+1+i][c+j]= a[i][j];
            }

        }r=rn,c=cn;
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%c",a[i][j]);
        }printf("\n");
    }
    return 0;
}
