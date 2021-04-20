 /*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[300];

int main()
{
    int n,l,h,r,i,last;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&l,&h,&r);
        for(i=l;i<r;i++){
            if(a[i]<h){
                a[i] = h;
            }
        }
    }
    for(i=0,last=a[0];i<=260;i++){
        if(a[i]!=last){
            printf("%d %d ",i,a[i]);
            last = a[i];
        }
    }

    return 0;
}
/*
8 1 11 5 2 6 7 12 7 16 14 3 25 19 18 22 3 13 9 23 13 29 24 4 28
*/
