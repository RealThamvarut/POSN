/*
    TASK:
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
float power(float val,int pow){
    if(pow == 0){
        return(1.0);
    }
    else{
        return(power(val,pow-1)*val);

    }
}
int main()
{
    float b =30.4, ans;
    int p=3;
    ans = power(b,p);
    printf("%f",ans);

    return 0;
}
