#include <stdio.h>

int main()
{
    long long n, m;
    int a[51];
    int i;
    

    
    long long f[22];
    f[0] = 0;
    for (i = 1; i <= 21; i++) {
        f[i] = ((i - 1) * f[i - 1] + 1);
        //printf("f[%d] = %lld\n", i, f[i]);
    }
    
    while (scanf("%I64d%I64d", &n, &m) != EOF) {
    //int n = 3, m = 10;
    for (i = 0; i < 50; i++) {
        a[i] = i;
    }
    int notfirst = 0;
    while (n) {
        long long k = ((m - 1) / f[n]) + 1;
        if (notfirst) printf(" ");
        notfirst = 1;
        
        printf("%d",a[k]);
        
        for (i = k; i < 49; i++) {
            a[i] = a[i + 1];
        }
        
        m = (m - 1) % f[n];
        if (m == 0) break;
        n -= 1;
    }printf("\n");
}
    
} 