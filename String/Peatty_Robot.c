/*
    TASK: Peatty_Robot
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char str[110];
int main()
{
    int len,x=0,y=x;
    scanf("%s",str);
    len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='N') y++;
        if(str[i]=='S') y--;
        if(str[i]=='E') x++;
        if(str[i]=='W') x--;
        if(str[i]=='Z') x=0,y=0;
    }
    printf("%d %d\n",x,y);

    return 0;
}

