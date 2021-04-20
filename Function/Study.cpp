/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int calr(int m,int n){
    if(m==0)
        return n+1;
    else if(n==0)
        return calr(m-1,1);
    else
        return calr(m-1,calr(m,n-1));
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",calr(m,n));
    return 0;
}

