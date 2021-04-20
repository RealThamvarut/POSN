/*
    TASK: Intro05
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,k;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    double d1,d2,d3;
    d1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    d2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    d3 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    double area,s;
    s = (d1+d2+d3)/2;
    area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
    printf("%.2lf\n",area);
    printf("%.2lf",(d1+d2+d3)*k+acos(-1)*k*k);
    return 0;
}
