// Problem: CHESSDIST
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
// Solved on: 2026-09-22T14:48:39.039Z

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int dx = abs(x1 - x2);
        int dy = abs(y1 - y2);

        if (dx > dy)
        printf("%d\n", dx);
        
        else
        printf("%d\n", dy);
    }

    return 0;
}