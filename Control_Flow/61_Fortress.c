/*
    TASK: Fortress
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    for(int i=0;i<20;i++){
        int m,n;
        scanf("%d %d",&m,&n);
        if(2*n>m||4*n<m){
            printf("0");
        }else{
            printf("%d",(2*n)-(m/2)+1);
        }
    }
    return 0;
}
