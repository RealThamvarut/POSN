/*
    TASK: Awit_cat
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char c[1000];
int main()
{
    int q;
    scanf("%d",&q);
    q++;
    while(q--){
        gets(c);
        printf("%s",c);

    }
    return 0;
}
