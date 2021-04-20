/*
    TASK: sms god bab hod makk
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>

char a[1000];
int main()
{
    int n,s,m,i,b=1;
    scanf("%d",&n);
    scanf("%d %d",&s,&m);
    int c=n-1;
    if(s==2 && m%3==1)a[0]='A';
    else if(s==2 && m%3==2)a[0]='B';
    else if(s==2 && m%3==0)a[0]='C';
    else if(s==3 && m%3==1)a[0]='D';
    else if(s==3 && m%3==2)a[0]='E';
    else if(s==3 && m%3==0)a[0]='F';
    else if(s==4 && m%3==1)a[0]='G';
    else if(s==4 && m%3==2)a[0]='H';
    else if(s==4 && m%3==0)a[0]='I';
    else if(s==5 && m%3==1)a[0]='J';
    else if(s==5 && m%3==2)a[0]='K';
    else if(s==5 && m%3==0)a[0]='L';
    else if(s==6 && m%3==1)a[0]='M';
    else if(s==6 && m%3==2)a[0]='N';
    else if(s==6 && m%3==0)a[0]='O';
    else if(s==7 && m%4==1)a[0]='P';
    else if(s==7 && m%4==2)a[0]='Q';
    else if(s==7 && m%4==3)a[0]='R';
    else if(s==7 && m%4==0)a[0]='S';
    else if(s==8 && m%3==1)a[0]='T';
    else if(s==8 && m%3==2)a[0]='U';
    else if(s==8 && m%3==0)a[0]='V';
    else if(s==9 && m%4==1)a[0]='W';
    else if(s==9 && m%4==2)a[0]='X';
    else if(s==9 && m%4==3)a[0]='Y';
    else if(s==9 && m%4==0)a[0]='Z';
    else if(s==1)
    {
        b=0;
    }


    while(c--)
    {
        int h,v,m;
        scanf("%d %d %d",&h,&v,&m);
        s=s+h;
        s=s+(3*v);

        if(s==2 && m%3==1)a[b]='A';
        else if(s==2 && m%3==2)a[b]='B';
        else if(s==2 && m%3==0)a[b]='C';
        else if(s==3 && m%3==1)a[b]='D';
        else if(s==3 && m%3==2)a[b]='E';
        else if(s==3 && m%3==0)a[b]='F';
        else if(s==4 && m%3==1)a[b]='G';
        else if(s==4 && m%3==2)a[b]='H';
        else if(s==4 && m%3==0)a[b]='I';
        else if(s==5 && m%3==1)a[b]='J';
        else if(s==5 && m%3==2)a[b]='K';
        else if(s==5 && m%3==0)a[b]='L';
        else if(s==6 && m%3==1)a[b]='M';
        else if(s==6 && m%3==2)a[b]='N';
        else if(s==6 && m%3==0)a[b]='O';
        else if(s==7 && m%4==1)a[b]='P';
        else if(s==7 && m%4==2)a[b]='Q';
        else if(s==7 && m%4==3)a[b]='R';
        else if(s==7 && m%4==0)a[b]='S';
        else if(s==8 && m%3==1)a[b]='T';
        else if(s==8 && m%3==2)a[b]='U';
        else if(s==8 && m%3==0)a[b]='V';
        else if(s==9 && m%4==1)a[b]='W';
        else if(s==9 && m%4==2)a[b]='X';
        else if(s==9 && m%4==3)a[b]='Y';
        else if(s==9 && m%4==0)a[b]='Z';

        b++;
        if(s==1)
        {
            for(; m>=0; m--)b=b-1;
        }
    }
    if(b>0)for(i=0; i<b; i++)
        {
            printf("%c",a[i]);
        }
    else printf("null");

    return 0;
}
