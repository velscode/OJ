#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        string str;
        cin >> str;
        
        int now_char = 0;
        int now_cnt = 0;
        
        for (int i = 0; i < str.length() + 1; i++) {
            if (now_char != 0 && now_char != str[i]) {
                if (now_cnt > 1) {
                    printf("%d", now_cnt);
                }
                printf("%c", now_char);    
                now_cnt = 1;
            } else {
                now_cnt++;
            }
            now_char = str[i];
        }
        printf("\n");
    }
    
    return 0;
}