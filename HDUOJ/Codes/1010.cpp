#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>

using namespace std;

int N, M, T;
char G[7][7], V[7][7];

bool dfs(int x, int y, int deepth) {
    //printf("visitd (%d, %d , %d)\n", y, x, deepth);
    if (!(x >= 0 && x < N && y >= 0 && y < M)) return false;
    if (V[y][x] != -1 || G[y][x] == 'X') return false;
    if (deepth > T) return false;
    
    if (deepth == T && G[y][x] == 'D') return true;
    
    V[y][x] = 1;
    
    if (dfs(x + 1, y, deepth + 1) == true) return true;
    if (dfs(x - 1, y, deepth + 1) == true) return true;
    if (dfs(x, y + 1, deepth + 1) == true) return true;
    if (dfs(x, y - 1, deepth + 1) == true) return true;
    
    V[y][x] = -1;
    
    return false;
}

int main()
{
    while (cin >> N >> M >> T && (N != 0 || M != 0 || T != 0)) {
        int sx, sy;
        int ex, ey;
        memset(G, 0, 7*7);
        memset(V, -1, 7*7);
        
        for (int y = 0; y < M; y++) {
            for (int x = 0; x < N; x++) {
                cin >> G[y][x];
                if (G[y][x] == 'S') {
                    sx = x;
                    sy = y;
                } 
                if (G[y][x] == 'D') {
                    ex = x;
                    ey = y;
                } 
            }
        }
        
        if ((abs(sx - ex) + abs(sy - ey)) % 2 != T % 2) printf("NO\n");
        else {
        if (dfs(sx, sy, 0)) printf("YES\n");
        else printf("NO\n");
            
        }
        
    }
}