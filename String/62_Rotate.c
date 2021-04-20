/*
    TASK : 62_Rotate
    AUTHOR : THAMVARUT
    SCHOOL : RYW
    LANG : C
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str[1010];
char temp[1010];
char temp2[1010];
int main()
{
    int q,n,k,len,i,j,l,cnt=0;
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",str);
        scanf("%d %d",&n,&k);
        k%=n;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            temp[i] = str[i];
            if()
            printf("%c",str[i]);
            /*
            memset(temp,0,sizeof temp);
            for(j=0+i;j<k+i;j++){
               temp[j] = str[j];
               printf("%s\n",temp);
            }*/

        }
    }
    return 0;
}
/*
5 reoreoreoreo 3 5
5 Peattepp 4 2
atpeppte
*/
