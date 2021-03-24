#include <stdio.h>

double a[10];
double n[10];

int main()
{
    int i;
    a[0] = 1;
    for (i = 1; i <= 9; i++) {
        a[i] = a[i - 1] * i;
    }
    
    n[0] = 1.0 / a[0];
    for (i = 1; i <= 9; i++) {
        n[i] = n[i - 1] + 1.0 / a[i];
    }
    
    printf("n e\n");
    printf("- -----------\n");
    for (i = 0; i < 10; i++) {
        if (i < 3)
        printf("%d %g\n", i, n[i]);
        else
        printf("%d %.9lf\n", i, n[i]);
    }
}