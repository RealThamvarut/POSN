/*
    TASK: Array Practice
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int a[1010];

int main()
{
    int q,ct=0;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&a[i]);
    }
    int Ser;
    scanf("%d",&Ser);
    for(int i=q-1;i>=0;i--){
            printf("%d",a[i]);
        if(a[i]==Ser){
            ct+=1;
        }
    }
    printf("\n%d",ct);
    return 0;
}
