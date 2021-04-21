/*
    TASK: Prime
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int a[8000000];
int main()
{
    int i,j,cnt=1;
    int n;
    //mark Odd Number
    for(i=3;i<8000000;i+=2){
        a[i] = 1;
    }
    //find Prime Using Sieve of
    for(i=3;i<sqrt(8000000);i+=2){
        if(a[i]){
            for(j=i*i;j<8000000;j+=i){
                a[j] = 0;
            }
        }
    }

    scanf("%d",&n);
    //First Prime is 2
    if(n==1){
        printf("2\n"); return 0;
    }
    //
    for(i=3;i<8000000;i++){
        if(a[i]==1){
            cnt++;
            if(cnt==n){
                printf("%d\n",i); return 0;
            }
        }
    }
    return 0;
}
