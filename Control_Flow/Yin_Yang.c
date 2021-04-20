/*
    TASK: Yin-Yang
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int q;
    int n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(int i=0;i<n+2;i++){
            for(int j=0;j<n+2-i-1;j++){printf(".");}
            for(int j=0;j<i+1;j++){printf("#");}
            if(i==0||i==n+1){
                for(int j=0;j<n+2;j++){printf("+");}
            }
            else{
                printf("+");
                for(int j=0;j<n;j++){printf("#");}
                printf("+");
            }
            printf("\n");
        }
        for(int i=0;i<n+2;i++){
            if(i==0||i==n+1){
                for(int j=0;j<n+2;j++){printf("#");}
            }
            else{
                printf("#");
                for(int j=0;j<n;j++){printf("+");}
                printf("#");
            }
            for(int j=0;j<n+2-i;j++){printf("+");}
            for(int j=0;j<i;j++){printf(".");}
            printf("\n");
        }
    }

    return 0;
}
