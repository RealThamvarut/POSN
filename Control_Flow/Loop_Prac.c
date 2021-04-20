/*
    TASK: Loop practice
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    ///
    for(int i=1;i<=N;i++){
        printf("%d ",i);
    }printf("\n");
    ///
    int a = N;
    while(a>=1){
        printf("%d ",a);
        a--;
    }printf("\n");
    ///
    a = 1;
    do{
        if(a%2==0){
            printf("%d ",a);
        }
        a++;
    }while(a<=N);
    printf("\n");
    ///
    a = N;
    for(int i=N;i>=1;i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }printf("\n");
    ///
    a = 1;
    while(a<=N){
        if(a%2==1){
            printf("%d ",a);
        }
        a++;
    }printf("\n");
    ///
    a = N;
    do{
        if(a%2==1){
            printf("%d ",a);
        }
        a--;
    }while(a>=1);
    return 0;
}
