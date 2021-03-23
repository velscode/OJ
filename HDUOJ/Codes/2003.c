#include <stdio.h>

#define PI 3.1415927

int main()
{
    double r;
    while(scanf("%lf",&r)!=EOF)
    {
        if(r>0.0000000001)
            printf("%.2lf\n",r);
            else
            printf("%.2lf\n",-r);
    }
    return 0;
}