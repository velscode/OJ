#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int T;
    
    cin >> T;
    
    while(T--) {
        long long n, m;
        int j = 1;
        while (cin >> n >> m && !(n == 0 && m == 0)) {
            int cnt = 0;
            for (long long a = 1; a < n; a++) {
                for (long long b = a + 1; b < n; b++) {
                    if ((a*a + b*b + m) % (a*b) == 0) {
                        cnt++;
                    }
                }
            }
            printf("Case %d: %d\n", j++, cnt);
        }
        if (T) {
            printf("\n");
        } 
    }
    
    return 0;
}