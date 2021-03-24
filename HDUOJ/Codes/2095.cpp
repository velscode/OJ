#include <stdio.h>
#include <map>

using namespace std;

int e[1000005];

int main(void)
{
    map<int, int> m;
    
    int n;
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            int tmp;
            scanf("%d", &tmp);
            m[tmp]++;
            e[i] = tmp;
        }
        
        for (int i = 0; i < n; i++) {
            if (m[e[i]] % 2 == 1) {
                printf("%d\n", e[i]);
                break;
            }
        }
    }
}