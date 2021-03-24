#include <stdio.h>

unsigned char F[1000000];

int main()
{
    int i;
    
    F[0] = 7;
    F[1] = 11;
    
    for (i = 2; i < 1000000; i++) {
        F[i] = (F[i - 1] + F[i - 2]) % 12;
    }
    
    while (scanf("%d", &i) != EOF) {
        if (F[i] % 3 == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}