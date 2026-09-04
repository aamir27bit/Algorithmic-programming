// Problem: NOTEBOOK
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NOTEBOOK
// Solved on: 2026-09-04T09:52:23.964Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        printf("%d\n", n * 10);
    }

    return 0;
}