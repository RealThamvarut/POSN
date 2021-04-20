/*
    TASK: Roman Conversion
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
int m;
int main()
{
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&m);
        while(m!=0){
            if(m>=1000){
                printf("M");
                m-=1000;
            }
            else if(m>=900){
                printf("CM");
                m-=900;
            }
            else if(m>=500){
                printf("D");
                m-=500;
            }
            else if(m>=400){
                printf("CD");
                m-=400;
            }
            else if(m>=100){
                printf("C");
                m-=100;
            }
            else if(m>=90){
                printf("XC");
                m-=90;
            }
            else if(m>=50){
                printf("L");
                m-=50;
            }
            else if(m>=40){
                printf("XL");
                m-=40;
            }
            else if(m>=10){
                printf("X");
                m-=10;
            }
            else if(m>=9){
                printf("IX");
                m-=9;
            }
            else if(m>=5){
                printf("V");
                m-=5;
            }
            else if(m>=4){
                printf("IV");
                m-=4;
            }
            else if(m>=1){
                printf("I");
                m-=1;
            }
        }printf("\n");

    }

    return 0;
}
