/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int d,i,ch=1;
    scanf("%d",&d);
    if(d<2){ printf("No"); return 0;}
    for(i=2;i<=sqrt(d);i++){
        if(d%i==0){
            ch=0;
        }
    }
    printf(ch==1?"Yes":"No");
    return 0;
}
