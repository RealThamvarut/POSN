/*
    TASK: 62_Exponentiation
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int c[10000]={1};
int main()
{
    int q,a,n,len=1,i,j,tod;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&n);
        if(n==0){
            printf("1\n");
            continue;
        }
        c[0]=1,len=1;
        for(i=0;i<n;i++){
            for(j=0,tod=0;j<len;j++){
                c[j] = c[j]*a+tod;
                if(c[j]>=10){
                    tod=c[j]/10, c[j]%=10;
                }
                else{
                    tod=0;
                }
            }
            if(tod)
                c[len]=tod,len++;
        }
        for(j=len-1;j>=0;j--)
            printf("%d",c[j]);
        printf("\n");
        memset(c,0,sizeof(c));
    }
    return 0;
}
