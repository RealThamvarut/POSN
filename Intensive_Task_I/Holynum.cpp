/*
    TASK: Holynum
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,k,p;
    //technical
    scanf("%d %d",&a,&k);
    p = round(a/pow(10,k));
    printf("%.0lf",p*pow(10,k));
    return 0;
}
