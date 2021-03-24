#include <stdio.h>
#include <cstring>

int used[21];
int str[21];
int n;

bool isprim(int a)
{
    for (int i = 2; i < a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

void dfs(int lastval, int deepth) {
    if (deepth == n) {
        if (!isprim(lastval + str[0])) return;
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", str[i]);
        }
        printf("%d\n", str[n - 1]);
        return ;
    }
    
    // 搜索一个可以使用的数
    for (int i = 1; i <= n; i++) {
        if (used[i] == 0) {
            if (isprim(lastval + i) == 1) {
                used[i] = 1;
                str[deepth] = i;
                dfs(i, deepth + 1);
                used[i] = 0;
            }
        }
    }
    
    return ;
}

int main()
{     
    int T = 0;
    while (scanf("%d", &n) != EOF) {
        T++;
        printf("Case %d:\n", T);
        memset(str, 0, 21 * sizeof(int));
        memset(used, 0, 21 * sizeof(int));
        str[0] = 1;
        used[1] = 1;
        dfs(1, 1);
        printf("\n");
    }
    return 0;
} 