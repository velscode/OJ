#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd (b, a%b) : a;
}

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        int m, res;
        cin >> m;
        int lastval = 1;
        
        while (m--) {
            int temp;
            cin >> temp;
            res = lastval / gcd(temp, lastval) *  temp;
            lastval = res;
        }
        printf("%d\n", res);
    }
    
    return 0;    
} 