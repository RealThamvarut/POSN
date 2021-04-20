/*
    TASK: Grade Easy
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int sc;
    scanf("%d",&sc);
    if(sc>=80) printf("A");
    else if(sc>=75) printf("B+");
    else if(sc>=70) printf("B");
    else if(sc>=65) printf("C+");
    else if(sc>=60) printf("C");
    else if(sc>=55) printf("D+");
    else if(sc>=50) printf("D");
    else printf("F");

    return 0;
}
