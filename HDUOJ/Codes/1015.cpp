#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

long long cal(char a, char b, char c, char d, char e) { 
    return (long long)(a-'A'+1) - (long long)(b-'A'+1)*(b-'A'+1) + (long long)(c-'A'+1)*(c-'A'+1)*(c-'A'+1) - (long long)(d-'A'+1)*(d-'A'+1)*(d-'A'+1)*(d-'A'+1) + (long long)(e-'A'+1)*(e-'A'+1)*(e-'A'+1)*(e-'A'+1)*(e-'A'+1);
}

int main()
{
    long long val;
    
    string str;
    
    while (cin >> val >> str && !(val == 0 && strcmp(str.c_str(), "END") == 0)) {
        
        sort(str.begin(), str.end(), greater<char>());
        
        char a,b,c,d,e;
        int used[str.length()] = {0};
        for (int i = 0; i < str.length(); i++) {
            if (used[i] == 0) {
                used[i] = 1;
                a = str[i];
            } else {
                continue;
            }
            for (int i = 0; i < str.length(); i++) {
                if (used[i] == 0) {
                    used[i] = 1;
                    b = str[i];
                } else {
                    continue;
                }
                for (int i = 0; i < str.length(); i++) {
                if (used[i] == 0) {
                    used[i] = 1;
                    c = str[i];
                } else {
                    continue;
                }
                for (int i = 0; i < str.length(); i++) {
                    if (used[i] == 0) {
                        used[i] = 1;
                        d = str[i];
                    } else {
                    continue;
                }
                    for (int i = 0; i < str.length(); i++) {
                        if (used[i] == 0) {
                            used[i] = 1;
                            e = str[i];
                        } else {
                    continue;
                }

                        if (cal(a,b,c,d,e) == val) {
                            printf("%c%c%c%c%c\n", a,b,c,d,e);
                            goto next;
                        }
                        used[i] = 0;
                    }
                    used[i] = 0;
                }
                used[i] = 0;
                }
                
                used[i] = 0;
            }
            used[i] = 0;
        }
        printf("no solution\n");
        next: ;
    }
    
    return 0;
}