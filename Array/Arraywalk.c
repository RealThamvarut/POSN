/*
    TASK: Arraywalk
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[25][25];
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    }printf("\n");
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            printf("%d ",a[i][j]);
        }
    }printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
    }
    printf("\n");
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }
    }


    return 0;
}
