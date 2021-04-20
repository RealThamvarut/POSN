/*
    TASK: WORM
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

struct A{
    int d,c;
    bool operator<(const A& o)const{
        return c < o.c;
    }
};
A a[100100];
int main()
{
    int n,i;
    double sum = 0,el = 0, mx = 0,ans1,ans2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i].d,&a[i].c);
    sort(a,a+n);
    sum =a[0].d , el = a[0].c, mx = sum/el;
    ans1 = sum, ans2=el;
    for(i=1;i<n;i++){
        sum+=a[i].d, el=a[i].c;
        if(sum/el > mx){
            mx = sum/el, ans1 = sum, ans2 = el;
        }
    }
    printf("%.0lf %.0lf\n",ans1,ans2);
    return 0;
}
/*
5 3 30 6 10 10 20 7 50 18 70
*/
