// Problem: C_RATING
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
// Solved on: 2026-09-16T14:56:36.223Z

#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, y;
        scanf("%d %d", &x, &y);

        printf("%d\n", (y - x + 7) / 8);
    }

    return 0;
}