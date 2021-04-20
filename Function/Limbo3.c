/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
char a[1010][1010];
int r,c,cout=0;
void play(int i,int j){
    if(a[i][j]=='.')            return ;
    a[i][j] = '.';
    if(i==0)    play(r-1,j);
    else        play(i-1,j);
    if(j==0)    play(i,c-1);
    else        play(i,j-1);
    if(i==r-1)  play(0,j);
    else        play(i+1,j);
    if(j==c-1)  play(i,0);
    else        play(i,j+1);

}
int main()
{
    int i,j;
    scanf("%d %d",&c,&r);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]=='*'){
            play(i,j);
            cout+=1;
        }
    }
    }
    printf("%d\n",cout);
    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***

*/
