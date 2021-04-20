/*
    TASK :
    AUTHOR : THAMVARUT
    SCHOOL : RYW
    LANG : C
*/
#include<stdio.h>
int a[15],b[15],n;
void play(int state){
    int i;
    if(state == n){
        printf("%d",a[0]);
        for(i=1;i<state;i++){
            if(a[i]==a[i-1])    printf("0");
            else                printf("1");
            //printf("%d ",a[i]);
        }
        printf("\n");
        return ;
    }
    a[state] = 0;
    play(state+1);
    a[state] = 1;
    play(state+1);

}
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        play(0);
    }
    return 0;
}
