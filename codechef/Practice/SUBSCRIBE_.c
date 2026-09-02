// Problem: SUBSCRIBE_
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
// Solved on: 2026-09-02T17:10:26.798Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int  x , y, z;

        scanf("%d %d", &x, &y);

        z = (x + 5) / 6;

        printf("%d\n", z*y);
    }

    return 0;
}