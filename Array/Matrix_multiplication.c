/*
    TASK: Matrix multiplication
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[1010][1010],b[1010][1010],c[1010][1010];
int main()
{
    int n1,m1,n2,m2;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    if(m1!=n2){
         printf("Can't Multiply.");
         return 0;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m2;j++){
            c[i][j] = 0;
            for(int x=0;x<n2;x++){
                c[i][j] += a[i][x]*b[x][j];
            }
            printf("%d ",c[i][j]);
        }printf("\n");
    }
    return 0;
}
