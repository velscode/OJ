#include <stdio.h>

#define PI 3.1415927

int main()
{
    double r;
    while(scanf("%lf",&r)!=EOF)
    {
        printf("%.3lf\n",r*r*r*PI*4/3);
    }
    return 0;
}