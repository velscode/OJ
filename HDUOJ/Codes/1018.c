// 斯特灵公式
#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    
    scanf("%d", &T);
    
    while (T--) {
        int n;
        scanf("%d", &n);
        
        double res = 0;
        for (int i = 2; i <= n; i++) {
            res += log10(i);
        }
        printf("%d\n", (int)res + 1);
    }
    
    return 0;
}