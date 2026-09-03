// Problem: CREDCOINS
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CREDCOINS
// Solved on: 2026-09-03T10:06:15.876Z

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        printf("%d\n", (X * Y) / 100);
    }

    return 0;
}