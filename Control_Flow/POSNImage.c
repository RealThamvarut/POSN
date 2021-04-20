/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            printf("*");
            if(i==0||i==n/2){           for(int j=0;j<n-2;j++){ printf("*");}}
            if(i<n/2&&i!=0&&i!=n/2){    for(int j=0;j<n-2;j++){ printf("-");}}
            if(i<n/2+1){    printf("*");}
            if(i>n/2){                  for(int j=0;j<n-1;j++){ printf("-");}}
            printf("-*");
            if(i==0||i==n-1){           for(int j=0;j<n-2;j++){ printf("*");}}
            else{                       for(int j=0;j<n-2;j++){ printf("-");}}
            printf("*-");
            if(i==0||i==n-1||i==n/2){   for(int j=0;j<n;j++){ printf("*");}}
            if(i<n/2&&i!=0&&i!=n/2){
                printf("*");
                for(int j=0;j<n-1;j++){ printf("-");}}
            if(i>n/2&&i!=n-1&&i!=n/2){
                for(int j=0;j<n-1;j++){ printf("-");}
                printf("*");
            }
            printf("-*");
            if(i==0||i==n-1){           for(int j=0;j<n-2;j++){ printf("-");}}
            if(i!=0&&i!=n-1){           for(int j=0;j<i-1;j++){ printf("-");}
            printf("*");
            for(int j=n-2-(i);j>0;j--){printf("-");}
            }
            printf("*");
            printf("\n");
        }
    }

    return 0;
}
