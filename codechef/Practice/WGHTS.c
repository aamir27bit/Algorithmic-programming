// Problem: WGHTS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS
// Solved on: 2026-09-22T18:13:04.934Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        
        int w, x, y, z;
        
        scanf("%d %d %d %d", &w, &x, &y, &z);

        if (x == w || y == w || z == w ||
            x + y == w || x + z == w || y + z == w)
        printf("YES\n");
        
        else
        printf("NO\n");
    }

    return 0;
}