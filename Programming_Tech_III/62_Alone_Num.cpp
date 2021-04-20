/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int a[100100],b[100100],d[100100];
int main()
{

    int q,t,i,ch=1,j,now=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&t);
        for(i=0;i<t;i++){
            scanf("%d",&a[i]);
            b[i] = a[i];
        }sort(a,a+t);
        for(i=0;i<t;i++){
            //cout << a[i] << " ";
            if(i==0){
                if(a[i]!=a[i+1]){
                    //cout << a[i] << " ";
                    d[now++] = a[i];
                    ch = 0;
                }
            }
            else if(i==t-1){
                if(a[i-1]!=a[i]){
                    //cout << a[i] << " ";
                    d[now++] = a[i];
                    ch = 0;
                }
            }
            else if(a[i]!=a[i+1]&&a[i]!=a[i-1]){
                //cout << a[i] << " ";
                d[now++] = a[i];
                ch = 0;
            }
            else ch=1;
        }

        if(ch){
            printf("No Alone Num");
        }else{
            for(i=0;i<t;i++){
                for(j=0;j<now;j++){
                    if(b[i]==d[j]){
                        printf("%d ",d[j]);
                    }
                }
            }
        }
    }
    return 0;
}
/*
3
9
3 2 1 2 3 7 3 6 8
7
1 3 2 4 2 0 1
6 -1 -2 -3 -3 -2 -1

*/
