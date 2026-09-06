// Problem: MONOPOLY2
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
// Solved on: 2026-09-06T18:24:19.815Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int p, q, r, s;
        scanf("%d %d %d %d", &p, &q, &r, &s);

        if (p > q + r + s ||
            q > p + r + s ||
            r > p + q + s ||
            s > p + q + r) {
            
            printf("YES\n");
        } 
            else {
            printf("NO\n");
        }
    }

    return 0;
}