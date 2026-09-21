// Problem: XJUMP
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP
// Solved on: 2026-09-21T17:28:25.750Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int x, y;
        
        scanf("%d %d", &x, &y);

        printf("%d\n", x / y + x % y);
    }

    return 0;
}