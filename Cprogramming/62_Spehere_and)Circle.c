/*
    TASK: 62_Sphere and Circle
    LANG: C
    AUTHOR: THAMVARUT
    SCHOOL: RYW
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.3lf\n",4*acos(-1)*r*r);
    printf("%.3lf\n",(4*acos(-1)*r*r*r)/3);
    printf("%.3lf\n",acos(-1)*r*r);
    printf("%.3lf",acos(-1)*r*2);
    return 0;
}
