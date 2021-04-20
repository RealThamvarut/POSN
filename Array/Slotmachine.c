/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[20][15];
int main()
{
    int i,j,k,l,m;
    int N,ct=0;;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                for(l=0;l<N;l++){
                    for(m=0;m<N;m++){
                        if(a[i][0]==a[j][1]&&a[i][0]==a[k][2]&&a[i][0]==a[l][3]&&a[i][0]==a[m][4]){
                            ct++;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",ct);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            for(k=0;k<N;k++){
                for(l=0;l<N;l++){
                    for(m=0;m<N;m++){
                        if(a[i][0]==a[j][1]&&a[i][0]==a[k][2]&&a[i][0]==a[l][3]&&a[i][0]==a[m][4]){
                            printf("%d %d %d %d %d\n",i+1,j+1,k+1,l+1,m+1);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/* test
4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3
*/
