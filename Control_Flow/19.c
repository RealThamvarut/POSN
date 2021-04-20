/*
    TASK:
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
        //case None
        if(d>r1+r2){printf("None");}
        if(/*h1==h2&&k1==k2*/d==0){
            if(r1==r2){printf("More");}
            //case same circle
            if(r1!=r2){printf("None");}
        }
        //case one tap
        if(d==r1+r2){printf("One");}
        if((d==r1||d==r2)&&(r1==2*r2||2*r1==r2)){printf("One");}
        //case more tap
        if(d<r1+r2&&h1!=h2&&k1!=k2){printf("More");}
    }

    return 0;
}
