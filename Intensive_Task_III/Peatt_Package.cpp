/*
    TASK: Peat Package
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int w[100100],c[100100],mark[100100];
int main()
{
    int q,n,k,i,l,r,mid,ch,sum,cnt,counter=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&k);
        for(i=0,l=0;i<n;i++){
            scanf("%d %d",&w[i],&c[i]);
            l = max(l,w[i]);
        }
        r=1e9;
        ch =0;
        while(l<r){
            mid = (l+r)/2;
            for(i=0,sum=0,cnt=1,counter++;i<n;i++){
                if(sum+w[i]>mid || mark[c[i]]==counter)
                    cnt++, sum=w[i],counter++,mark[c[i]]=counter;
                else sum+=w[i],mark[c[i]]=counter;
            }
            if(cnt<=k)  r=mid,ch=1;
            else l=mid+1;
        }
        if(ch)  printf("%d\n",l);
        else    printf("-1\n");
        //memset(mark,o,sizeof mark);
    }
    return 0;
}
//2 5 3 10 1 10 2 40 1 30 3 30 4 5 2 10 1 10 2 40 1 30 3 30 1
