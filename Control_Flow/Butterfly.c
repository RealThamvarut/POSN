/*
    TASK: Butterfly
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        if(i<n-1){
            for(int j=0;j<i+1;j++){printf("*");}
            for(int j=0;j<2*(n-i)-3;j++){printf("-");}
            for(int j=0;j<i+1;j++){printf("*");}
            printf("\n");
        }
        if(i == n-1){for(int j=0;j<2*n-1;j++){printf("*");} printf("\n");}
        if(i>n-1){
            for(int j=2*n-i-1;j>0;j--){printf("*");}
            for(int j=0;j<2*(i-n)+1;j++){printf("-");}
            for(int j=2*n-i-1;j>0;j--){printf("*");}
            printf("\n");
        }
    }

    return 0;
}
