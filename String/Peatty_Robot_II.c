/*
    TASK: Peatty_Robot II
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<string.h>
char str[110];
char rotate(char tid){
    printf("R");
    if(tid=='N') return 'E';
    if(tid=='E') return 'S';
    if(tid=='S') return 'W';
    if(tid=='W') return 'N';
}
int main()
{
    int i,len,x=0,y=x;
    char tid = 'N';
    scanf("%s",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='N'){
            while(tid!='N'){
                tid = rotate(tid);
            }
            printf("F");
        }
        if(str[i]=='S'){
            while(tid!='S'){
                tid = rotate(tid);
            }
            printf("F");
        }
        if(str[i]=='E'){
            while(tid!='E'){
                tid = rotate(tid);
            }
            printf("F");
        }
        if(str[i]=='W'){
            while(tid!='W'){
                tid = rotate(tid);
            }
            printf("F");
        }
        if(str[i]=='Z'){
            printf("Z");
            tid = 'N';
        }
    }
    //printf("%d %d\n",x,y);

    return 0;
}

