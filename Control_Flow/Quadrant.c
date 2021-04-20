/*
    TASK: Quadrant
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int main()
{
    int dgr;
    scanf("%d",&dgr);
    if(dgr >= 0){
        if(dgr%360>271){ printf("4");}
        else if(dgr%360==270||dgr%360==90) { printf("y-axis");}
        else if(dgr%360==180||dgr%360==0) { printf("x-axis");}
        else if(dgr%360>181){ printf("3");}
        else if(dgr%360>91){ printf("2");}
        else if(dgr%360>1){ printf("1");}
    }
    else if(dgr < 0){
        if(dgr%360<-271){ printf("1");}
        else if(dgr%360==-270||dgr%360==-90) { printf("y-axis");}
        else if(dgr%360==-180||dgr%360==0) { printf("x-axis");}
        else if(dgr%360<-181){ printf("2");}
        else if(dgr%360<-91){ printf("3");}
        else if(dgr%360<-1){ printf("4");}
    }

    return 0;
}
