/*
    TASK: 62_CrossC
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int h1,k1,r1,h2,k2,r2;
    int q;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d %d %d",&h1,&k1,&r1,&h2,&k2,&r2);
        double d = sqrt((double)pow(h1-h2,2)+(double)pow(k2-k1,2));
        if(r1==r2){
            if(d==2*r1){
                printf("One");
            }else if(d > 2*r1){
                printf("None");
            }else if(d>=0&&d<=2*r1){
                printf("More");
            }
        }
        if(r1>r2){
            if(d==r1+r2){
                printf("One");
            }else if(d>r1+r2||d<r1-r2&&d>=0){
                printf("None");
            }else if(d==r2){
                printf("One");
            }else if(d<r1+r2&&d>r1-r2){
                printf("More");
            }else if(d==r1-r2){
                printf("One");
            }
        }
        if(r2>r1){
            if(d==r1+r2){
                printf("One");
            }else if(d>r1+r2||d<r2-r1&&d>=0){
                printf("None");
            }else if(d==r1){
                printf("One");
            }else if(d<r1+r2&&d>r2-r1){
                printf("More");
            }else if(d==r2-r1){
                printf("One");
            }
        }
    }
    return 0;
}
