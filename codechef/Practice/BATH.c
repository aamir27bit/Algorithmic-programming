// Problem: BATH
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH
// Solved on: 2026-09-13T17:53:08.304Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        int x, y;
        
        scanf("%d %d", &x, &y);

        printf("%d\n", x / (2 * y));
    }

    return 0;
}