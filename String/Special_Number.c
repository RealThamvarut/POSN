/*
    TASK: Special Num
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char str[10];
int main()
{
    int len,sum=0;
    for(int i=0;i<5;i++){
        scanf(" %s",str);
        len = strlen(str);
        sum=0;
        for(int j=0;j<len;j++){
            sum += pow(str[j]-'0',j+1);

        }
        /*if(sum==atol(str)){
            printf("Y");
        }
        else{
            printf("N");
        }*/
        printf("%s",sum==atol(str)?"Y":"N");
    }
    return 0;
}
