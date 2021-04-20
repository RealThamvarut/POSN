/*
    TASK: Brick
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
char a[20][20];
int b[20];
int main()
{
    int m,n;
    int i,j,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    for(j=0;j<m;j++){
        int k=n-1;
        for(i=0;i<n;i++){
            if(a[i][j]=='O'){
                k= i-1;
                break;
            }
        }
        for(;k>=0&&b[j]>0;k--, b[j]--){
            a[k][j] = '#';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
8 5
. . . . .
. . . . .
. O O . .
. . . . .
. O . . .
. . . O .
. . . . .
. . . . .
1 1 3 2 0



*/
