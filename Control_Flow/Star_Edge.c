/*
    TASK: Star Edge
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    int n;
    while(q--){
        scanf("%d",&n);
        for(int i=0;i<2*n+1;i++){
            if(i==0||i==2*n){
                for(int j=0;j<2*n+1;j++){ printf("*");}
                printf("\n"); i+=1;
            }
            if(i%2==1&&i<2*n+1){
                printf("*");
                for(int j=0;j<i;j++){printf("-");}
                printf("*");
                for(int j=0;j<2*n-(i+1);j+=2){printf("-*");}
            }
            if(i%2==0&&i<2*n+1){
                printf("*");
                for(int j=0;j<i-1;j++){printf("*");}
                printf("*");
                for(int j=0;j<2*n-(i);j+=2){printf("-*");}
            }
            printf("\n");
        }
    }
    return 0;
}
