/*
    TASK: IceBucket
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int t,g,k;
    int m=0,ct=0;
    scanf("%d",&t);
    while(t--){
        m=0,ct=0;
        scanf("%d %d",&g,&k);
        if(g<100){           printf("0");}
        else if(g>=100){
            while(m<g){
                m = m+10+100*k;ct++;
                if(m<g) m = m - 100;
                else printf("%d",ct);
            }
        }

    }
    //BigOh G/K 1e7/1e3
    return 0;
}
