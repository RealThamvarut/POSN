/*
    TASK: Roman_Conversion_II
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char rom[4500];
int main()
{
    int q,len,sum;
    scanf("%d",&q);
    while(q--){
        scanf("%s",rom);
        len = strlen(rom);
        sum=0;
        for(int i=0;i<len;i++){
            if(rom[i]=='M'){
                sum+=1000;
            }
            else if(rom[i]=='C'&&rom[i+1]=='M'){
                sum+=900;
                i++;
            }
            else if(rom[i]=='D'){
                sum+=500;
            }
            else if(rom[i]=='C'&&rom[i+1]=='D'){
                sum+=400;
                i++;
            }
            else if(rom[i]=='C'){
                sum+=100;
            }
            else if(rom[i]=='X'&&rom[i+1]=='C'){
                sum+=90;
                i++;
            }
            else if(rom[i]=='L'){
                sum+=50;
            }
            else if(rom[i]=='X'&&rom[i+1]=='L'){
                sum+=40;
                i++;
            }
            else if(rom[i]=='X'){
                sum+=10;
            }
            else if(rom[i]=='I'&&rom[i+1]=='X'){
                sum+=9;
                i++;
            }
            else if(rom[i]=='V'){
                sum+=5;
            }
            else if(rom[i]=='I'&&rom[i+1]=='V'){
                sum+=4;
                i++;
            }
            else if(rom[i]=='I'){
                sum+=1;
            }
        }
        printf("%d\n",sum);
    }


    return 0;
}
