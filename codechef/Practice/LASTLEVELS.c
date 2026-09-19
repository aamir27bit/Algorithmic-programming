// Problem: LASTLEVELS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
// Solved on: 2026-09-19T15:57:46.976Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        
        int x, y, z;
        
        scanf("%d %d %d", &x, &y, &z);

        int breaks = (x - 1) / 3;

        printf("%d\n", x * y + breaks * z);
    }

    return 0;
}