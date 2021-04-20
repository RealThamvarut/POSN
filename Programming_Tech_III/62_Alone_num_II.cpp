/*
    TASK:
    LANG: CPP
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100],mark[1000];
int main()
{
    int q,n,i,j,ch=1;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i] = a[i];
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(b[i] = a[j]){
                    printf("%d ",a[j]);
                    ch=1;
                    i++;
                }else{
                    ch=0;
                }
            }
        }
        if(!ch){
            printf("No Alone Num\n");
        }
        printf("\n");
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
