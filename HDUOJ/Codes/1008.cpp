#include <stdio.h>

int main()
{
    int T;
    
    while (1) {
        int res = 0;
        int now = 0;
        
        scanf("%d", &T);
        if (T == 0) {
            return 0;
        }
        
        while (T--) {
            int pos;
            scanf("%d", &pos);
            if (pos > now) {
                res += 6 * (pos - now);
            } else if (pos < now) {
                res += 4 * (now - pos);
            } else {
                ;
            }
            now = pos;
            res += 5;
        }
        printf("%d\n", res);
    }
}