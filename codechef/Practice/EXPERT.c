// Problem: EXPERT
// Platform: codechef
// Language: C​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
// Solved on: 2026-09-03T18:57:50.572Z

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int x, y;

        scanf("%d %d", &x, &y);

        if (y * 100 >= 50 * x)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}